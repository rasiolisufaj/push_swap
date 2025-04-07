NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -Iincludes -Ilibft-extended

SRC_DIR = srcs
LIBFT_DIR = libft-extended
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = $(SRC_DIR)/handle_errors.c \
	   $(SRC_DIR)/push_swap.c \
	   $(SRC_DIR)/push.c \
	   $(SRC_DIR)/rev_rotate.c \
	   $(SRC_DIR)/rotate.c \
	   $(SRC_DIR)/sort_three.c \
	   $(SRC_DIR)/split.c \
	   $(SRC_DIR)/stack_utils.c \
	   $(SRC_DIR)/swap.c \

OBJS = $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	@rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re