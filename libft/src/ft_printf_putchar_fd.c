/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putchar_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:25:07 by jfox              #+#    #+#             */
/*   Updated: 2026/01/02 16:00:03 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/libft.h"

int	ft_printf_putchar_fd(char c, int fd)
{
	unsigned char	x;

	x = c;
	write(fd, &x, 1);
	return (1);
}
