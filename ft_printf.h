/* ************************************************************************** */
/*                                                                            */
/*   ft_printf.h                                                              */
/*                                                                            */
/*   By: Ataullin Shamil                                                      */
/*                                                                            */
/*   Created: 2021/12/10                                                      */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);

int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_putnbr_hex_min(unsigned int n);
int		ft_putnbr_hex_max(unsigned int n);
int		ft_put_pointer(unsigned long long n);

#endif
