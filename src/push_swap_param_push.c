/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_param_push.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:23:03 by jfox              #+#    #+#             */
/*   Updated: 2026/01/24 19:15:04 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	pa(t_mystack *a, t_mystack *b)
{
	int	i;

	i = a->index;
	if (b->index == 0)
		return ;
	while (i > 0)
	{
		a->values[i] = a->values[i - 1];
		i--;
	}
	a->values[0] = b->values[0];
	a->index += 1;
	i = 0;
	while (i < b->index - 1)
	{
		b->values[i] = b->values[i + 1];
		i++;
	}
	b->values[b->index - 1] = 0;
	b->index -= 1;
	ft_printf("pa\n");
}

void	pb(t_mystack *a, t_mystack *b)
{
	int	i;

	i = b->index;
	if (a->index == 0)
		return ;
	while (i > 0)
	{
		b->values[i] = b->values[i - 1];
		i--;
	}
	b->values[0] = a->values[0];
	b->index += 1;
	i = 0;
	while (i < a->index - 1)
	{
		a->values[i] = a->values[i + 1];
		i++;
	}
	a->values[a->index - 1] = 0;
	a->index -= 1;
	ft_printf("pb\n");
}
