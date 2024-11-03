/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:17:09 by iumorave          #+#    #+#             */
/*   Updated: 2024/11/03 17:51:56 by iumorave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *ptr)
{
	int	count;

	write (1, "0x", 2);
	count = 2;
	if (ptr == NULL)
	{
		write(1, "0", 1);
		count = 1;
	}
	else
	{
		ft_printhexa((unsigned long)ptr, 'x');
		count++;
	}
	return (count);
}
