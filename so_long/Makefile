NAME = so_long

CC = cc

CFLAGS = -Wall -Wextra -Werror

MLX_DIR = minilibx

MLX_LIB = $(MLX_DIR)/libmlx.a

MLX_FLAGS = -L$(MLX_DIR) -lmlx -framework OpenGL -framework AppKit

SRCS = so_long.c parse_map.c load_elements.c key_press.c check_map.c

OBJS = $(SRCS:.c=.o)

INCLUDE = -Iincludes -I$(MLX_DIR)OBJS = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))

HEADER = so_long.h

all: $(NAME)

$(OBJS)/%.o: $(SRCS) | $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJS):
	mkdir -p $(OBJS)

$(NAME): $(OBJS) $(MLX_LIB)
	$(CC) $(CFLAGS) $(OBJS) $(MLX_FLAGS) -o $(NAME)

$(MLX_LIB):
	make -C $(MLX_DIR)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
