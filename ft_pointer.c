/* ************************************************************************** */
/*                                                                            */
/*   ft_pointer.c                                                             */
/*                                                                            */
/*   By: Ataullin Shamil                                                      */
/*                                                                            */
/*   Created: 2021/12/11                                                      */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lennbr_pointer(unsigned long long n)
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

static int	ft_helper(unsigned long long n)
{
	int	len;

	len = ft_lennbr_pointer(n);
	if (n < 16 )
		ft_putchar("0123456789abcdef"[n % 16]);
	else
	{
		ft_helper(n / 16);
		ft_putchar("0123456789abcdef"[n % 16]);
	}
	return (len);
}

int	ft_put_pointer(unsigned long long n)
{
	int	len;

	len = 0;
	len = len + ft_putstr("0x");
	len = len + ft_helper(n);
	return (len);
}
