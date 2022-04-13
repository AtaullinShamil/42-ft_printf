/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:51:44 by ntojamur          #+#    #+#             */
/*   Updated: 2021/12/13 22:49:43 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_whatisthis(char c, va_list ap);
int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_putnbr(int n);
int		ft_lennbr(int n);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_lennbr_unsigned(unsigned int n);
int		ft_putnbr_hex_min(unsigned int n);
int		ft_putnbr_hex_max(unsigned int n);
int		ft_lennbr_hex(unsigned int n);
int		ft_put_pointer(unsigned long long n);
int		ft_kostyl(unsigned long long n);
int		ft_lennbr_pointer(unsigned long long n);

#endif
