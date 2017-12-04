# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/02 16:54:56 by jjauzion          #+#    #+#              #
#    Updated: 2017/12/02 16:55:02 by jjauzion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PARSER = parser/ft_read.c parser/ft_realloc.c parser/ft_file_to_tab.c \
		 parser/ft_tetrisplit.c parser/ft_parser.c parser/ft_check.c \

SOLVER = solver/ft_add2grid.c solver/ft_fillit.c solver/ft_generate_grid.c\
		 solver/ft_print_tab.c solver/ft_fit.c solver/ft_freetab.c\
		 solver/ft_getnboftetri.c solver/ft_next_i.c solver/ft_loop_cgs.c\
		 solver/ft_remove_tetri.c solver/main_fillit.c

NAME  = fillit

FLAGS = -Wall -Wextra -Werror

NAME  = fillit

all: $(NAME)

$(NAME): 
	@gcc -o $(NAME) -Lincludes/ -Iincludes/ includes/libft.a $(FLAGS) $(SOLVER) $(PARSER) 


clean:
	@rm -f $(NAME) 

fclean: clean
	@rm -f $(NAME)

re : fclean all
