/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:57:41 by iumorave          #+#    #+#             */
/*   Updated: 2024/11/04 21:10:03 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_type(char type, va_list args)
{
	int	count;

	count = 0;
	if (type == 'd' || type == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (type == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (type == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (type == 'p')
		count += ft_pointer(va_arg(args, void *));
	else if (type == 'u')
		count += ft_unsigned_u(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X' )
		count += ft_puthexa(va_arg(args, unsigned int), type);
	else if (type == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_type(str[i], args);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/*
#include <stdio.h>
int main()
{
	int nb = 1;
	void *p = &nb;
	printf(" %c %s %d %i %u %p \n", 'c', "Test", -2147483647, -42, 0, p );
	ft_printf(" %c %s %d %i %u %p \n", 'c', "Test", -2147483648, -42, 0, p );
	return 0;
}
*/
