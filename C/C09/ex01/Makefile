NAME = libft.a

SRCS_DIR = srcs/

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS = $(addprefix $(SRCS_DIR), $(SRCS:.c=.o))

INCLUDES = includes/

HEADER = $(INCLUDES)ft.h

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(SRCS_DIR)%.o: $(SRCS_DIR)%.c $(HEADER)
	$(CC) $(FLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
