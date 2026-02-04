/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_input_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:02:00 by jfox              #+#    #+#             */
/*   Updated: 2026/01/28 15:55:38 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	ft_pushswap_atoi(const char *str, int *ctrl)
{
	long	number;
	int		state;

	number = 0;
	state = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			state = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - 48);
		if ((number > INT_MAX && state == 1) || (number * state < INT_MIN))
		{
			*ctrl = -2;
			return (0);
		}
		str++;
	}
	return (number * state);
}

int	check_empty(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (argv[i][0] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	free_strings(char **strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return ;
}

int	*convert_input(char **string_input, int size)
{
	int	i;
	int	ctrl;
	int	*int_tab;

	i = 0;
	ctrl = 0;
	int_tab = malloc(size * sizeof(int));
	while (i < size)
	{
		int_tab[i] = ft_pushswap_atoi(string_input[i], &ctrl);
		if (ctrl == -2)
		{
			free(int_tab);
			ft_putstr_fd("Error\n", 2);
			return (NULL);
		}
		i++;
	}
	return (int_tab);
}

int	*normalise(int *input, int capacity)
{
	int	i;
	int	x;
	int	count;
	int	*normal_list;

	i = 0;
	count = 0;
	normal_list = malloc(capacity * sizeof(int));
	if (!normal_list)
		return (NULL);
	while (i < capacity)
	{
		x = 0;
		while (x < capacity)
		{
			if (input[i] > input[x])
				count++;
			x++;
		}
		normal_list[i] = count;
		count = 0;
		i++;
	}
	free(input);
	return (normal_list);
}
