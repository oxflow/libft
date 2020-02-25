/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 04:33:51 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/04 09:21:24 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_printf(const char *format, ...)
{
	int		size;
	va_list	ap;

	size = 0;
	va_start(ap, format);
	while (*format)
	{
		size++;
		if (*format == '%')
		{
			format++;
			size += parse_printf(&ap, (char **)&format);
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (size);
}
