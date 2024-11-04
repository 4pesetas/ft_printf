/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:40:08 by iumorave          #+#    #+#             */
/*   Updated: 2024/11/04 21:15:32 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char c)
{
	int		count;
	char	*base;

	count = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	else
		return (0);
	if (n >= 16)
	{
		count += ft_puthexa(n / 16, c);
	}
	count += ft_putchar(base[n % 16]);
	if (count < 0)
		return (-1);
	return (count);
}
