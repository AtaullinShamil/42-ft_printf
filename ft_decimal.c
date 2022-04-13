/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 23:30:49 by ntojamur          #+#    #+#             */
/*   Updated: 2021/12/13 22:49:42 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;

	len = ft_lennbr(n);
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (len);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
			ft_putnbr(n);
		}
		else if (n < 10)
			ft_putchar(n + '0');
		else
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
	}
	return (len);
}

int	ft_lennbr(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	else if (n == -2147483648)
		len = 11;
	else
	{
		if (n < 0)
		{
			n = -n;
			len++;
		}
		while (n)
		{
			n = n / 10;
			len++;
		}
	}
	return (len);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	int	len;

	len = ft_lennbr_unsigned(n);
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (len);
}

int	ft_lennbr_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
