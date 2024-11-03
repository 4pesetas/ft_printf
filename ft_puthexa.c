/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:40:08 by iumorave          #+#    #+#             */
/*   Updated: 2024/11/03 17:51:24 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char letter)
{
	int		counter;
	char	*base;

	counter = 0;
	if (letter == 'x')
		base = "0123456789abcdef";
	else if (letter == 'X')
		base = "0123456789ABCDEF";
	else
		return (0);
	if (n >= 16)
	{
		ft_print_hex(n / 16, letter);
		count++;
	}
	ft_putchar(base[nbr % 16]);
	count++;
	return (count);
}
