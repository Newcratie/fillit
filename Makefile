# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/02 16:54:56 by jjauzion          #+#    #+#              #
#    Updated: 2017/12/06 12:34:25 by jjauzion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = parser/ft_read.c parser/ft_realloc.c parser/ft_file_to_tab.c \
	   parser/ft_tetrisplit.c parser/ft_parser.c parser/ft_check.c \
	   solver/ft_add2grid.c solver/ft_fillit.c solver/ft_generate_grid.c\
	   solver/ft_print_tab.c solver/ft_fit.c solver/ft_freetab.c\
	   solver/ft_getnboftetri.c solver/ft_next_i.c solver/ft_loop_cgs.c\
	   solver/ft_remove_tetri.c solver/main_fillit.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

NAME  = fillit

all: $(NAME)

$(NAME): LIB $(OBJS)
	gcc -o $(NAME) -Lincludes/libft/ -Iincludes/ -Iincludes/libft/ includes/libft/libft.a $(FLAGS) $(OBJS)

LIB:
	make -C includes/libft

%.o: %.c
	gcc $(FLAGS) -Iincludes/ -Iincludes/libft/ -c -o $@ $<

clean:
	make clean -C includes/libft
	rm -f $(OBJS) 

fclean: clean
	make fclean -C includes/libft
	rm -f $(NAME)

re : fclean all
