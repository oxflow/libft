# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdavid <fdavid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/10/01 00:04:53 by fdavid            #+#    #+#              #
#    Updated: 2016/02/19 01:46:28 by fdavid           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

FLAGS	=	-Wall -Wextra -Werror

CC		=	gcc $(FLAGS)

HEAD	=	-I includes

IO		=	io/del_args.c \
			io/ft_putc.c \
			io/ft_putchar.c \
			io/ft_putchar_fd.c \
			io/ft_putendl_fd.c \
			io/ft_puttab.c \
			io/ft_putid.c \
			io/ft_putnbr.c \
			io/ft_putnbr_fd.c \
			io/ft_putstr.c \
			io/ft_putstr_fd.c \
			io/get_args.c \
			io/get_next_line.c \
			io/printf/ft_printf.c \
			io/printf/functions.c

MEMS	=	memory/ft_bzero.c \
			memory/ft_memalloc.c \
			memory/ft_memccpy.c \
			memory/ft_memchr.c \
			memory/ft_memcmp.c \
			memory/ft_memcpy.c \
			memory/ft_memdel.c \
			memory/ft_memmove.c \
			memory/ft_memset.c \
			memory/ft_realloc.c \
			memory/ft_swap.c

OTHERS	=	others/ft_abs.c \
			others/ft_atoi.c \
			others/ft_bubble_int.c \
			others/ft_intlen.c \
			others/ft_isalpha.c \
			others/ft_isalnum.c \
			others/ft_isascii.c \
			others/ft_isnumeric.c \
			others/ft_isprint.c \
			others/ft_isdigit.c \
			others/ft_itoa.c \
			others/ft_round.c \
			others/ft_tolower.c \
			others/ft_toupper.c \
			others/ft_xtoi.c \
			others/ft_power.c \
			others/ft_die.c

STRS	=	strings/ft_stradd.c \
			strings/ft_strcat.c \
			strings/ft_strchr.c \
			strings/ft_strclr.c \
			strings/ft_strcmp.c \
			strings/ft_strcpy.c \
			strings/ft_strdel.c \
			strings/ft_strdup.c \
			strings/ft_strequ.c \
			strings/ft_striter.c \
			strings/ft_striteri.c \
			strings/ft_strjoin.c \
			strings/ft_strlcat.c \
			strings/ft_strmap.c \
			strings/ft_strmapi.c \
			strings/ft_strmove.c \
			strings/ft_strlen.c \
			strings/ft_strncat.c \
			strings/ft_strncmp.c \
			strings/ft_strncpy.c \
			strings/ft_strnequ.c \
			strings/ft_strnew.c \
			strings/ft_strnstr.c \
			strings/ft_strrchr.c \
			strings/ft_strreplace.c \
			strings/ft_strsplit.c \
			strings/ft_strstr.c \
			strings/ft_strsub.c \
			strings/ft_strtrim.c \
			strings/ft_strchar.c

TABS	=	tabs/ft_bubble_sort.c \
			tabs/ft_pushback_tab.c \
			tabs/ft_subtab.c \
			tabs/ft_tabdel.c \
			tabs/ft_tabdup.c \
			tabs/ft_tabfstr.c \
			tabs/ft_tablen.c \
			tabs/ft_tabnew.c \
			tabs/ft_tabstrip.c

LISTS	=	lists/ft_lstadd.c \
			lists/ft_lstbubble.c \
			lists/ft_lstdel.c \
			lists/ft_lstdelone.c \
			lists/ft_lstiter.c \
			lists/ft_lstmap.c \
			lists/ft_lstnew.c

DRAW	=	draw/drawline.c \
			draw/image.c \
			draw/mlx.c

SRC		=	$(IO) $(MEMS) $(OTHERS) $(STRS) $(TABS) $(LISTS)

OBJ		=	$(SRC:.c=.o)

DRAWOBJ	=	$(DRAW:.c=.o)

all:		$(NAME)

draw:		$(OBJ) $(DRAWOBJ)
	@echo "\033[32m["$(NAME)"] compilation de "$(NAME)"...\033[0m"
	@ar rc $(NAME) $(OBJ) $(DRAWOBJ)
	@ranlib $(NAME)

$(NAME):	$(OBJ)
	@echo "\033[32m["$(NAME)"] compilation de "$(NAME)"...\033[0m"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ):
	@echo "\033[32m["$(NAME)"] compilation de "$@"...\033[0m"
	@$(CC) -c $*.c -o $@ $(HEAD)

$(DRAWOBJ):
	@echo "\033[32m["$(NAME)"] compilation de "$@"...\033[0m"
	@$(CC) -c $*.c -o $@ $(HEAD)

clean:
	@echo "\033[31m["$(NAME)"] suppression des objets...\033[0m"
	@rm -f $(OBJ) $(DRAWOBJ)

fclean:		clean
	@echo "\033[31m["$(NAME)"] suppression de "$(NAME)"...\033[0m"
	@rm -f $(NAME)

re:			fclean all
