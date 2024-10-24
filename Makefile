NAME		= libft.a
SO_NAME		= libft.so

SRCS		= $(shell find . -name '*.c' ! -name 'ft_lst*.c' ! -name main.c)
OBJS		= $(SRCS:.c=.o)

BONUS		= $(shell find . -name 'ft_lst*.c')
BONUS_OBJS	= $(BONUS:.c=.o)

HEADER	= libft.h
RM		= rm -f
AR		= ar rcs
CC		= cc
CFLAGS	= -Wall -Wextra -Werror -fPIC  # Added -fPIC here for position-independent code
# FLAGS	= -fsanitize=address -g3

%.o: %.c	$(HEADER) Makefile
		@$(CC) $(FLAGS) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
		@$(AR) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
		@$(RM) $(NAME) $(SO_NAME)

re:		fclean all

bonus:	$(OBJS) $(BONUS_OBJS)
		@$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:	all clean fclean re bonus
