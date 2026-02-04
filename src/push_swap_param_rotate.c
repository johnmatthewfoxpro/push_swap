/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_param_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:20:50 by jfox              #+#    #+#             */
/*   Updated: 2026/01/24 20:17:50 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	ra(int *value_a, int index)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = value_a[0];
	while (i < index - 1)
	{
		value_a[i] = value_a[i + 1];
		i++;
	}
	value_a[index - 1] = tmp;
	ft_printf("ra\n");
}

void	rb(int *value_b, int index)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = value_b[0];
	while (i < index - 1)
	{
		value_b[i] = value_b[i + 1];
		i++;
	}
	value_b[index - 1] = tmp;
	ft_printf("rb\n");
}

void	rr(int *value_a, int *value_b, int index_a, int index_b)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = value_a[0];
	while (i < index_a - 1)
	{
		value_a[i] = value_a[i + 1];
		i++;
	}
	value_a[index_a - 1] = tmp;
	i = 0;
	tmp = value_b[0];
	while (i < index_b - 1)
	{
		value_b[i] = value_b[i + 1];
		i++;
	}
	value_b[index_b - 1] = tmp;
	ft_printf("rr\n");
}
