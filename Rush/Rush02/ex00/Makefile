NAME = rush-02

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3

SRCS = main.c \
       parse.c \
       processing.c \
       split.c \
       strcpy_cmp.c

OBJS = $(SRCS:.c=.o)

HEADER = rush.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
