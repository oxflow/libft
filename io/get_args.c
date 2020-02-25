/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 14:06:34 by fdavid            #+#    #+#             */
/*   Updated: 2015/04/06 23:23:20 by fdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static t_argv		*init_args(void)
{
	t_argv			*argv;

	if (!(argv = (t_argv *)ft_memalloc(sizeof(t_argv))))
		return (NULL);
	argv->arg = NULL;
	ft_bzero(argv->opt, OPT_CHARSET);
	argv->nbo = 0;
	argv->nba = 0;
	argv->error = 0;
	return (argv);
}

static int			is_valid_option(char c, char *charset)
{
	size_t			i;
	size_t			len;

	i = 0;
	len = ft_strlen(charset);
	while (i < len)
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static int			parse_option(char *av, t_argv *argv, char *charset)
{
	unsigned int	i;
	size_t			len;

	if (av[0] != '-')
		return (0);
	else if (!ft_strcmp(av, "--"))
		return (-1);
	i = 1;
	len = ft_strlen(av);
	while (i < len)
	{
		if (argv->error == 0 && !(is_valid_option(av[i], charset)))
			argv->error = av[i];
		if (argv->opt[(int)av[i]] == 0)
		{
			argv->opt[(int)av[i]] = 1;
			argv->nbo++;
		}
		i++;
	}
	return (1);
}

static int			parse_args(int ac, char **av, unsigned int i, t_argv *argv)
{
	unsigned int	c;

	c = 0;
	argv->nba += ac - i;
	if (!(argv->arg = (char **)ft_memalloc(sizeof(char *) * (argv->nba + 1))))
		return (-1);
	while ((int)i < ac)
	{
		argv->arg[c] = ft_strdup(av[i]);
		c++;
		i++;
	}
	argv->arg[argv->nba] = NULL;
	return (1);
}

t_argv				*get_args(int ac, char **av, char *charset)
{
	int				test;
	unsigned int	i;
	int				parse_opt;
	t_argv			*argv;

	if (!(argv = init_args()))
		return (NULL);
	i = 1;
	parse_opt = 1;
	while ((int)i < ac && parse_opt)
	{
		if ((test = parse_option(av[i], argv, charset)) > 0)
		{
			i++;
			continue ;
		}
		else if (!ft_strcmp(av[i], "--"))
			i++;
		break ;
	}
	parse_args(ac, av, i, argv);
	return (argv);
}
