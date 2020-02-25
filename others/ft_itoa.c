/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/02 18:39:28 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/04 10:04:26 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_itoa(int n)
{
	char		negative;
	char		*result;
	size_t		i;

	negative = 0;
	i = ft_intlen(n);
	if (n < 0)
	{
		negative = 1;
		n *= -1;
	}
	result = ft_strnew(i);
	while (i > 0)
	{
		i--;
		result[i] = n % 10 + 48;
		n /= 10;
	}
	result[ft_strlen(result)] = '\0';
	if (negative)
		result[0] = '-';
	return (result);
}
