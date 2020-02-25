/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 15:22:00 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/02 18:19:47 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t			ft_putid(char *str)
{
	size_t		i;
	size_t		strlen;
	size_t		total;

	i = 0;
	total = 0;
	strlen = ft_strlen(str);
	while (i < strlen)
	{
		ft_putnbr(str[i]);
		total += ft_intlen((int)str[i]);
		i++;
		if (i != strlen)
			ft_putchar('.');
	}
	return (total);
}
