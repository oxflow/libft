/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 13:35:49 by fdavid            #+#    #+#             */
/*   Updated: 2015/04/06 23:20:11 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGS_H
# define ARGS_H
# define OPT_CHARSET 127

typedef struct		s_argv
{
	unsigned int	nbo;
	char			opt[OPT_CHARSET];
	unsigned int	nba;
	char			**arg;
	char			error;
}					t_argv;

t_argv				*get_args(int ac, char **av, char *charset);
void				del_args(t_argv *argv);

#endif
