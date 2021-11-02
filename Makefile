SRCS =	ft_printf.c\
		format_extension.c\
		utils.c\
		conversion.c
OBJS =	$(SRCS:.c=.o)

CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME 	= libftprintf.a
LIBFT_PATH	= ./libft
LIBFT	= $(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)
	cp $(LIBFT) $(NAME)

bonus: $(NAME)

clean:
	$(MAKE) clean -C $(LIBFT_PATH)
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)

re: fclean all

.PHONY: clean
