SRC= main.c ft_read.c ft_realloc.c ft_file_to_tab.c ft_error_checker.c ft_tetrisplit.c ft_replace.c \
	 ft_form_checker.c ft_form_a.c

NAME  = fillit

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
	@gcc -o $(NAME) -Llib -lft -Ilib -I $(FLAGS) $(SRC) 
clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re : fclean all
