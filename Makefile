NAME		= libft.a

SRCS		=	./ft_isalpha.c \
				./ft_striteri.c \
				./ft_tolower.c \
				./ft_memset.c \
				./ft_strlcpy.c \
				./ft_strchr.c \
				./ft_isascii.c \
				./ft_memmove.c \
				./ft_putnbr_fd.c \
				./ft_memcpy.c \
				./ft_strrchr.c \
				./ft_strmapi.c \
				./ft_calloc.c \
				./ft_memchr.c \
				./ft_strlcat.c \
				./ft_bzero.c \
				./ft_strjoin.c \
				./ft_strnstr.c \
				./ft_strlen.c \
				./ft_itoa.c \
				./ft_atoi.c \
				./ft_strdup.c \
				./ft_putchar_fd.c \
				./ft_putstr_fd.c \
				./ft_putendl_fd.c \
				./ft_strncmp.c \
				./ft_isprint.c \
				./ft_toupper.c \
				./ft_isalnum.c \
				./ft_memcmp.c \
				./ft_substr.c \
				./ft_isdigit.c \
				./ft_split.c \
				./ft_strtrim.c

OBJS		= $(SRCS:.c=.o)

BONUS		=	./ft_lstlast.c \
				./ft_lstadd_front.c \
				./ft_lstsize.c \
				./ft_lstadd_back.c \
				./ft_lstiter.c \
				./ft_lstnew.c \
				./ft_lstmap.c \
				./ft_lstclear.c \
				./ft_lstdelone.c

BONUS_OBJS	= $(BONUS:.c=.o)

HEADER	= libft.h
AR		= ar rcs
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

%.o: %.c	$(HEADER) Makefile
	@$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(AR) $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS) $(BONUS_OBJS)

fclean:	clean
	@rm -rf $(NAME)

re:		fclean all

bonus:	$(OBJS) $(BONUS_OBJS)
	@$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:	all clean fclean re bonus
