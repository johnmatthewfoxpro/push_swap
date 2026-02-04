/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:51:34 by jfox              #+#    #+#             */
/*   Updated: 2026/01/28 16:11:07 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	init_stack(t_mystack *stack, int *input, int index, int capacity)
{
	int	i;

	i = 0;
	stack->values = ft_calloc(capacity, sizeof(int));
	if (!stack->values)
	{
		free(stack);
		return ;
	}
	stack->index = index;
	stack->capacity = capacity;
	if (input)
	{
		while (i < capacity)
		{
			stack->values[i] = input[i];
			i++;
		}
	}
}

static int	check_isspace(char **argv)
{
	int	i;
	int	x;
	int	len;
	int	count;

	i = 0;
	while (argv[i])
	{
		x = 0;
		count = 0;
		len = ft_strlen(argv[i]);
		while (argv[i][x])
		{
			if (argv[i][x] == ' ')
				count++;
			if (count == len)
			{
				ft_putstr_fd("Error\n", 2);
				return (0);
			}
			x++;
		}
		i++;
	}
	return (1);
}

static int	*complete_input(char **argv, int *capacity)
{
	char	*input;
	char	**string_input;
	int		*int_input;

	if (!check_isspace(argv))
		return (0);
	input = join_input(argv);
	string_input = ft_split(input, ' ');
	free(input);
	string_input = checkall_input(string_input);
	if (!string_input)
		return (0);
	*capacity = ft_strtablelen(string_input);
	int_input = convert_input(string_input, *capacity);
	free_strings(string_input);
	if (!int_input)
		return (0);
	if (!dup_check(int_input, *capacity)
		|| !(check_sorted(int_input, *capacity)))
		return (0);
	int_input = normalise(int_input, *capacity);
	if (!int_input)
		return (0);
	return (int_input);
}

int	main(int argc, char **argv)
{
	int			*checked_input;
	int			capacity;
	t_mystack	stack_a;
	t_mystack	stack_b;

	if (argc <= 1)
		return (0);
	capacity = 0;
	checked_input = complete_input(argv, &capacity);
	if (! checked_input)
		return (0);
	init_stack(&stack_a, checked_input, capacity, capacity);
	init_stack(&stack_b, NULL, 0, capacity);
	if (capacity <= 5)
		shortsort(&stack_a, &stack_b);
	else
	{
		longsort(&stack_a, &stack_b);
		putback(&stack_a, &stack_b);
	}
	free(checked_input);
	free(stack_a.values);
	free(stack_b.values);
	return (0);
}
