/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_long.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:35:58 by jfox              #+#    #+#             */
/*   Updated: 2026/02/04 13:55:42 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	find_index(t_mystack *s, int index)
{
	int	i;

	i = 0;
	while (s->values[i] != index)
	{
		if (s->values[i] != index)
			i++;
	}
	return (i);
}

void	putback(t_mystack *a, t_mystack *b)
{
	int	max_index;
	int	pos;

	while (b->index > 0)
	{
		max_index = b->index - 1;
		pos = find_index(b, max_index);
		if (pos <= b->index / 2)
		{
			while (b->values[0] != max_index)
				rb(b->values, b->index);
		}
		else
		{
			while (b->values[0] != max_index)
				rrb(b->values, b->index);
		}
		pa(a, b);
	}
}

void	longsort(t_mystack *a, t_mystack *b)
{
	int	n;
	int	precision;
	int	limit;

	n = a->index;
	precision = n / 20 + 9;
	limit = 0;
	while (a->index > 0)
	{
		if (a->values[0] <= limit + precision)
		{
			pb(a, b);
			if (b->values[0] <= limit)
				rb(b->values, b->index);
			limit++;
		}
		else
		{
			ra(a->values, a->index);
		}
	}
}
