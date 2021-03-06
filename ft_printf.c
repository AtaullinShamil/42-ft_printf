/* ************************************************************************** */
/*                                                                            */
/*   main.c                                                                   */
/*                                                                            */
/*   By: Ataullin Shamil                                                      */
/*                                                                            */
/*   Created: 2021/12/10                                                      */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_symbol(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg (ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(ap, unsigned int)));
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'x')
		return (ft_putnbr_hex_min(va_arg(ap, unsigned int)));
	if (c == 'X')
		return (ft_putnbr_hex_max(va_arg(ap, unsigned int)));
	if (c == 'p')
		return (ft_put_pointer(va_arg(ap, unsigned long long)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		res;
	int		plus;
	va_list	ap;

	va_start(ap, str);
	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			plus = ft_check_symbol(str[i + 1], ap);
			res = res + plus;
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			res++;
		}
		i++;
	}
	va_end(ap);
	return (res);
}
