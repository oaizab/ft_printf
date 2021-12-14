SRCS	=	ft_printf.c	ft_printf_check.c	ft_putchar.c	ft_putnbr.c	ft_putstr.c	ft_putnbr_unsigned.c \
			ft_putnbr_base.c	ft_putnbr_addresse.c
OBJS	=	$(SRCS:.c=.o)
HEADER	=	-I./
NAME	=	libftprintf.a
CC		=	cc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror
AR		=	ar rcs

# ----------------------------------------------------------------------------

all:		$(NAME)

%.o: 		%.c
			$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

bonus:		all $(BOBJS)
			$(AR) $(NAME) $(BOBJS)

clean:
			$(RM) $(OBJS) $(BOBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re test bonus