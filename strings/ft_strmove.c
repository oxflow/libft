/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/31 23:43:09 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/02 18:28:40 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_strmove(char **s, int pos)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(*s) - pos;
	tmp = ft_strnew(len);
	ft_strncpy(tmp, (*s + pos), len);
	free(*s);
	*s = tmp;
}
