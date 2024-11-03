/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:09:34 by iumorave          #+#    #+#             */
/*   Updated: 2024/11/03 17:51:29 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		ft_unsigned_int (n / 10);
		count++;
	}
	ft_putchar(n % 10 + 48);
	count++;
	return (count);
}
