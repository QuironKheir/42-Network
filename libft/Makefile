# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aenrique <aenrique@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 21:18:39 by aenrique          #+#    #+#              #
#    Updated: 2022/01/31 18:07:09 by aenrique         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -------- Etiquetas -------- 

SRCS    = ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c

OBJS    = ${SRCS:.c=.o}

BONUS = ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

B_OBJS    = ${BONUS:.c=.o}

NAME    = libft.a

CFLAGS  = -Wall -Werror -Wextra

RM      = rm -f

AR      = ar rc

CC      = gcc

# --------- Acciones -------- 
all:	${NAME}

${NAME}:	${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS} ${B_OBJS}

fclean:	clean
	${RM} ${NAME}

bonus:	${OBJS} ${B_OBJS}
	${AR} ${NAME} ${OBJS} ${B_OBJS}

re:	fclean ${NAME}

#  ------------ PHONY TARGET  -----------
#
#  Es solo un nombre para que se ejecute 
#  una receta cuando se realiza una soli-
#  citud explicita.
#
#  Evita un conflicto con un archivo del 
#  mismo nombre y mejora el rendimiento.
#

.PHONY: all clean fclean re
