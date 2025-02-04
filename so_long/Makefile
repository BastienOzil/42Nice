NAME = so_long

CC = cc

FLAGS = -Wall -Wextra -Werror

MLXFLAGS = -L./includes/minilibx-linux -lmlx -lbsd -lXext -lX11 -lm

INCLUDES = -I./includes/minilibx-linux

SRCS = test.c

OBJS = $(SRCS:.c=.o)

#BONUS =

#BOBJS = $(BONUS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS) $(MLXFLAGS) $(INCLUDES)

.c.o:
	@$(CC) $(FLAGS) -c -o $@ $< $(INCLUDES)

bonus: $(OBJS) $(BOBJS)
	ar rcs $(NAME) $(OBJS) $(BOBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
