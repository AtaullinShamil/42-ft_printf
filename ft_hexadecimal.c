/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 00:08:43 by ntojamur          #+#    #+#             */
/*   Updated: 2021/12/13 22:49:43 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_min(unsigned int n)
{
	int	len;

	len = ft_lennbr_hex(n);
	if (n < 16 )
		ft_putchar("0123456789abcdef"[n % 16]);
	else
	{
		ft_putnbr_hex_min(n / 16);
		ft_putchar("0123456789abcdef"[n % 16]);
	}
	return (len);
}

int	ft_putnbr_hex_max(unsigned int n)
{
	int	len;

	len = ft_lennbr_hex(n);
	if (n < 16 )
		ft_putchar("0123456789ABCDEF"[n % 16]);
	else
	{
		ft_putnbr_hex_max(n / 16);
		ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (len);
}

int	ft_lennbr_hex(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 16;
		len++;
	}
	return (len);
}
