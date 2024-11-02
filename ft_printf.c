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

#include "ft_printf.h"

static int	ft_type(char type, va_list args)
{
	int count;

	count = 0;
	if (type == 'd' || type == 'i')
		count += ft_putnbr(va_arg(args, int));
    else if (type == 's')
        count += ft_putstr(va_arg(args, char *));
    else if (type == 'p')
        count += ft_pointer(va_arg(args, void *));
    else if (type == 'u')
        count += ft_pointer(va_arg(args, unsigned int));
    else if (type == '%')
        count += ft_putchar('%');
	return (count);
}
int ft_putchar (char c)
{
    return write(1, &c, 1);
}
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	count;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_type(format[i], args);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
