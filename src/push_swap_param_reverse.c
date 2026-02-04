/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_param_reverse.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:21:27 by jfox              #+#    #+#             */
/*   Updated: 2026/01/24 19:14:50 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	rra(int *value_a, int index)
{
	int	i;
	int	tmp;

	i = index - 1;
	tmp = value_a[index - 1];
	while (i > 0)
	{
		value_a[i] = value_a[i - 1];
		i--;
	}
	value_a[0] = tmp;
	ft_printf("rra\n");
}

void	rrb(int *value_b, int index)
{
	int	i;
	int	tmp;

	i = index - 1;
	tmp = value_b[index - 1];
	while (i > 0)
	{
		value_b[i] = value_b[i - 1];
		i--;
	}
	value_b[0] = tmp;
	ft_printf("rrb\n");
}

void	rrr(int *value_a, int *value_b, int index_a, int index_b)
{
	int	i;
	int	tmp;

	i = index_a - 1;
	tmp = value_a[index_a - 1];
	while (i > 0)
	{
		value_a[i] = value_a[i - 1];
		i--;
	}
	value_a[0] = tmp;
	i = index_b - 1;
	tmp = value_b[index_b - 1];
	while (i > 0)
	{
		value_b[i] = value_b[i - 1];
		i--;
	}
	value_b[0] = tmp;
	ft_printf("rrr\n");
}
