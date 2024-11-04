/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:09:34 by iumorave          #+#    #+#             */
/*   Updated: 2024/11/04 20:41:35 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_unsigned_u (n / 10);
	}
	count += ft_putchar(n % 10 + 48);
	if (count < 0)
		return (-1);
	return (count);
}
