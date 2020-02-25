/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 19:19:20 by fdavid            #+#    #+#             */
/*   Updated: 2015/03/02 18:20:58 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	count;

	count = 0;
	while (s[count] != '\0')
	{
		f(count, (s + count));
		count++;
	}
}
