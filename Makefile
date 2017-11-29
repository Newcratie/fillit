PARSER = parser/main.c parser/ft_read.c parser/ft_realloc.c parser/ft_file_to_tab.c \
		 parser/ft_tetrisplit.c parser/ft_parser.c parser/ft_check.c \

SOLVER = solver/ft_add2grid.c solver/ft_fillit.c solver/ft_generate_grid.c solver/ft_gettabsize.c\
		 solver/ft_print_tab.c solver/ft_copygrid.c solver/ft_fit.c solver/ft_freetab.c\
		 solver/ft_getnboftetri.c solver/ft_next_i.c solver/ft_print_tetri.c solver/ft_loop_cgs.c\
		 solver/ft_remove_tetri.c jj_main.c solver/ft_fitbis.c

NAME  = fillit
NAME2  = parsing

FLAGS = -Wall -Wextra -Werror

NAME  = fillit

all: $(NAME)

test: $(NAME2)

$(NAME): 
	@gcc -o $(NAME) -Lincludes/ -Iincludes/ includes/libft.a $(FLAGS) $(SOLVER) 

$(NAME2):
	@gcc -o $(NAME2) -Lincludes/ -Iincludes/ includes/libft.a $(FLAGS) $(PARSER) 

clean:
	@rm -f $(NAME) 

fclean: clean
	@rm -f $(NAME) $(NAME2)

re : fclean all
repar : fclean test
