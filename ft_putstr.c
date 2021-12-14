/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaizab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:46:51 by oaizab            #+#    #+#             */
/*   Updated: 2021/12/14 13:14:50 by oaizab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

int	ft_putstr(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	if (s)
	{
		while (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
	}
	return (ft_strlen(s));
}
