/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 22:12:26 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/02 18:21:53 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	count;

	count = 0;
	fresh = ft_strnew(ft_strlen(s) + 1);
	while (s[count] != '\0')
	{
		fresh[count] = f(count, s[count]);
		count++;
	}
	return (fresh);
}
