SRCS	= ft_printf.c \
		  ft_libft.c \
		  ft_special.c \
		  ft_print_str.c \
		  ft_print_pointer.c \
		  ft_putu.c \
		  ft_puthex.c

NAME	= libftprintf.a

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

OBJS	= ${SRCS:.c=.o}

AR		= ar -rcs

RM		= rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
