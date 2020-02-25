/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 07:32:34 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/04 09:22:27 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int	ft_print_char(va_list *arg, int sp)
{
	int		i;
	int		c;

	c = va_arg(*arg, int);
	i = 1;
	while (i++ < sp)
		ft_putchar(32);
	ft_putchar((char)c);
	return (0);
}

static int	ft_print_number(va_list *arg, int sp)
{
	int		i;
	int		n;

	n = va_arg(*arg, int);
	i = ft_intlen(n);
	while (i++ < sp)
		ft_putchar(32);
	ft_putnbr(n);
	return ((int)ft_intlen(n) - 1);
}

static int	ft_print_string(va_list *arg, int sp)
{
	int		i;
	char	*s;

	s = va_arg(*arg, char *);
	i = ft_strleni(s);
	while (i++ < sp)
		ft_putchar(32);
	ft_putstr(s);
	return (ft_strleni(s) - 1);
}

int			parse_printf(va_list *ap, char **format)
{
	char	*type;
	int		size;
	int		sp;
	int		(*tab)(va_list *, int);

	sp = 0;
	size = 0;
	type = *format;
	if (ft_isdigit(*type))
	{
		sp = ft_atoi(type);
		*format += ft_intlen(sp);
		type = *format;
	}
	if (tab = ft_print_number, *type == 'd')
		size = (*tab)(ap, sp);
	else if (tab = ft_print_string, *type == 's')
		size = (*tab)(ap, sp);
	else if (tab = ft_print_char, *type == 'c')
		size = (*tab)(ap, sp);
	else if (*type == '%')
		ft_putchar('%');
	if (sp > 0)
		return (sp);
	return (size);
}
