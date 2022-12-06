SRCS		=	$(SRCS_DIR)/main.c\
				$(SRCS_DIR)/print_msg.c\
				$(SRCS_DIR)/list_utils.c\
				$(SRCS_DIR)/find_limits.c\
				$(SRCS_DIR)/parse.c\
				$(SRCS_DIR)/push.c\
				$(SRCS_DIR)/rotate.c\
				$(SRCS_DIR)/reverse_rotate.c\
				$(SRCS_DIR)/swap.c\
				$(SRCS_DIR)/sorted.c\
				$(SRCS_DIR)/index.c\
				$(SRCS_DIR)/small_sort.c\
				$(SRCS_DIR)/radix_sort.c\

SRCS_DIR	= srcs

OBJS		= $(subst $(SRCS_DIR), $(OBJS_DIR), $(SRCS:.c=.o))

OBJS_DIR	= objs

CC		=	gcc
CFLAGS		= -g -Wall -Wextra -Werror -g #-fsanitize=address
RM			= rm -fr
NAME		= push_swap

all: $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -I/usr/headers -c $< -o $@

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM)	$(OBJS)

fclean:	clean
			$(RM)	$(NAME) $(OBJS_DIR)
re:	fclean all

.PHONY: fclean all re clean