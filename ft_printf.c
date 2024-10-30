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

#include <stdio.h>
#include <stdarg.h>

va_list	args;

va_start (args, format);

va_arg (va_list var, type);

int	ft_printf(const char *s, ...)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != "%")
			i++;
		if (s[i + 1] == "s")
		{
			type = char *;
			ft_putstr(type);
		}
		else if (s[i + 1] == "d")
		{
			type = int *;
			ft_putnbr(type);
		}
	}
}

int main()
{
	int result = printf("%s\n%d\n", "cc", 100);
	printf("%d chars were written", result);
	return 0;
}
