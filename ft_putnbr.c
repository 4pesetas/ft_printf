/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:32:13 by iumorave          #+#    #+#             */
/*   Updated: 2024/11/04 19:01:10 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return (11);
		}
		nb = -nb;
	}
	if (nb > 9)
	{
		count += ft_putnbr(nb / 10);
	}
	count += ft_putchar(nb % 10 + 48);
	if (count < 0)
		return (-1);
	return (count);
}
