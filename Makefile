# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/21 11:43:58 by jjauzion          #+#    #+#              #
#    Updated: 2017/11/21 12:00:12 by jjauzion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = src/main.c src/ft_read.c src/ft_realloc.c src/ft_file_to_tab.c src/ft_error_checker.c\
	 src/ft_tetrisplit.c src/ft_replace.c src/ft_form_checker.c src/ft_form_a.c src/ft_form_b.c\
	 src/ft_form_c.c

NAME  = fillit

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
	@gcc -o $(NAME) -Lincludes/ -Iincludes/ includes/libft.a $(FLAGS) $(SRC) 
clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re : fclean all
