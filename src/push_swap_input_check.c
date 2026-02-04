/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_input_check.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:02:21 by jfox              #+#    #+#             */
/*   Updated: 2026/01/28 15:55:52 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	check_string(char *string)
{
	int	i;

	i = 0;
	if (string[i] == '+' || string[i] == '-')
		i++;
	if (string[i] == '\0')
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	while (string[i])
	{
		if (!ft_isdigit(string[i]))
			return (0);
		i++;
	}
	return (1);
}

char	*join_input(char **argv)
{
	char	*str;
	char	*tmp;
	char	*space;
	int		i;

	i = 1;
	str = "";
	space = " ";
	if (!check_empty(argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (NULL);
	}
	while (argv[i])
	{
		tmp = ft_strjoin(str, argv[i]);
		if (!(str[0] == '\0'))
			free(str);
		str = ft_strjoin(tmp, space);
		free (tmp);
		i++;
	}
	return (str);
}

size_t	ft_strtablelen(char **s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (i);
	while (s[i])
		i++;
	return (i);
}

char	**checkall_input(char **string_input)
{
	int	i;

	i = 0;
	if (!string_input)
		return (NULL);
	while (string_input[i])
	{
		if (!check_string(string_input[i]))
		{
			free_strings(string_input);
			ft_putstr_fd("Error\n", 2);
			return (NULL);
		}
		i++;
	}
	return (string_input);
}

int	*dup_check(int *input, int size)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < size)
	{
		while (x + 1 < size)
		{
			if (input[i] == input[x + 1])
			{
				ft_putstr_fd("Error\n", 2);
				free(input);
				return (NULL);
			}
			x++;
		}
		i++;
		x = i;
	}
	return (input);
}
