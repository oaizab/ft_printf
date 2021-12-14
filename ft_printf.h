/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaizab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:17:02 by oaizab            #+#    #+#             */
/*   Updated: 2021/12/14 14:49:09 by oaizab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(const char *s);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putnbr_base(unsigned int n, char *base);
int	ft_putnbr_addresse(unsigned long n, char *base);
int	ft_printf_check(char c, va_list ap);

#endif