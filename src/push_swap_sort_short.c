/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_short.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:35:46 by jfox              #+#    #+#             */
/*   Updated: 2026/01/24 19:34:32 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	sort3(t_mystack *a)
{
	if (a->values[0] < a->values[1] && a->values[1] < a->values[2])
	{
		return ;
	}
	if (a->values[0] < a->values[1] && a->values[0] < a->values[2])
	{
		rra(a->values, a->index);
		sa(a->values, a->index);
	}
	else if (a->values[0] > a->values[2] && a->values[0] < a->values[1])
		rra(a->values, a->index);
	else if (a->values[0] < a->values[2] && a->values[0] > a->values[1])
		sa(a->values, a->index);
	else
	{
		ra(a->values, a->index);
		if (!check_stacked(a))
			return ;
		sa(a->values, a->index);
	}
}

static void	sort4(t_mystack *a, t_mystack *b)
{
	while (a->values[0] != 0)
	{
		ra(a->values, a->index);
	}
	pb(a, b);
	sort3(a);
	pa(a, b);
}

static void	sort5(t_mystack *a, t_mystack *b)
{
	while (a->values[0] != 0)
	{
		if (a->values[1] == 0 || a->values [2] == 0)
			ra(a->values, a->index);
		else
			rra(a->values, a->index);
	}
	pb(a, b);
	while (a->values[0] != 1)
	{
		if (a->values[1] == 1)
			ra(a->values, a->index);
		else
			rra(a->values, a->index);
	}
	pb(a, b);
	sort3(a);
	pa(a, b);
	pa(a, b);
}

void	shortsort(t_mystack *a, t_mystack *b)
{
	if (a->capacity == 2 || b->capacity == 2)
		sa(a->values, a->index);
	else if (a->capacity == 3)
	{
		sort3(a);
	}
	else if (a->capacity == 4)
	{
		sort4(a, b);
	}
	else
	{
		sort5(a, b);
	}
	return ;
}
