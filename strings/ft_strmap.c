/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 22:12:26 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/02 18:21:34 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	int		count;

	count = 0;
	fresh = ft_strnew(ft_strlen(s) + 1);
	while (s[count] != '\0')
	{
		fresh[count] = f(s[count]);
		count++;
	}
	return (fresh);
}
