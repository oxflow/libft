/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/25 07:19:28 by fdavid            #+#    #+#             */
/*   Updated: 2015/06/22 21:03:43 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		remove_spaces(const char *s)
{
	int			i;

	i = 0;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	return (i);
}

int				ft_atoi(const char *str)
{
	int			i;
	int			ret;
	char		negative;

	ret = 0;
	negative = 0;
	if (!str)
		return (0);
	i = remove_spaces(str);
	if (str[i] == '-')
	{
		negative = 1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		ret *= 10;
		ret += str[i] - 48;
		i++;
	}
	if (negative)
		return (-ret);
	return (ret);
}
