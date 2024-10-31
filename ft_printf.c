/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:57:41 by iumorave          #+#    #+#             */
/*   Updated: 2024/10/30 20:38:41 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"
#include <stdio.h>
#include <stdarg.h>

static int	type(char format, va_list args)
{
	int count;

	count = 0;
	if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int));
	return (count);
}

int ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int	i;
	int	count;

	count = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count += type(s[i], args);
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}

int main()
{
	return 0;
}
