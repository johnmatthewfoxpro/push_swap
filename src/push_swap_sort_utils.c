/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:39:52 by jfox              #+#    #+#             */
/*   Updated: 2026/01/24 16:45:49 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	check_sorted(int *input, int capacity)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < capacity)
	{
		while (x + 1 < capacity)
		{
			if (input[i] > input[x + 1])
				return (1);
			x++;
		}
		i++;
		x = i;
	}
	free(input);
	return (0);
}

int	check_stacked(t_mystack *s)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < s->index)
	{
		while (x + 1 < s->index)
		{
			if (s->values[i] > s->values[x + 1])
				return (1);
			x++;
		}
		i++;
		x = i;
	}
	return (0);
}
