/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_param_swap.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:23:03 by jfox              #+#    #+#             */
/*   Updated: 2026/01/24 15:54:57 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	sa(int *value_a, int index)
{
	int	tmp;

	tmp = 0;
	if (index < 2)
		return ;
	tmp = value_a[0];
	value_a[0] = value_a[1];
	value_a[1] = tmp;
	ft_printf("sa\n");
}

void	sb(int *value_b, int index)
{
	int	tmp;

	tmp = 0;
	if (index < 2)
		return ;
	tmp = value_b[0];
	value_b[0] = value_b[1];
	value_b[1] = tmp;
	ft_printf("sb\n");
}

void	ss(int *value_a, int *value_b, int index_a, int index_b)
{
	int	tmp;
	int	i;

	tmp = 0;
	i = 0;
	if (index_a > 1)
	{
		tmp = value_a[0];
		value_a[0] = value_a[1];
		value_a[1] = tmp;
		i++;
	}
	tmp = 0;
	if (index_b > 1)
	{
		tmp = value_b[0];
		value_b[0] = value_b[1];
		value_b[1] = tmp;
		i++;
	}
	if (i > 0)
		ft_printf("ss\n");
}
