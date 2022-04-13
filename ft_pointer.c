/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 00:57:33 by ntojamur          #+#    #+#             */
/*   Updated: 2021/12/13 22:49:41 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(unsigned long long n)
{
	int	len;

	len = 0;
	len = len + ft_putstr("0x");
	len = len + ft_kostyl(n);
	return (len);
}

int	ft_kostyl(unsigned long long n)
{
	int	len;

	len = ft_lennbr_pointer(n);
	if (n < 16 )
		ft_putchar("0123456789abcdef"[n % 16]);
	else
	{
		ft_kostyl(n / 16);
		ft_putchar("0123456789abcdef"[n % 16]);
	}
	return (len);
}

int	ft_lennbr_pointer(unsigned long long n)
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
