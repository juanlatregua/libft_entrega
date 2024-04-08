# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 08:49:37 by jsilva-m          #+#    #+#              #
#    Updated: 2023/11/06 17:59:17 by jsilva-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
    ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
	ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
    ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRCS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c\
		ft_lstnew.c ft_lstsize.c
OBJ = $(SRCS:.c=.o)

BONUS_OBJ = $(BONUS_SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME): $(SRCS) $(OBJ)
		@gcc -c $(FLAGS) $(SRCS)
		@ar rcs $(NAME) $(OBJ)


all: $(NAME)

bonus: $(SRCS) $(BONUS_SRCS) $(BONUS_OBJ)
		@gcc -c $(FLAGS) $(BONUS_SRCS)
		@ar rcs $(NAME) $(BONUS_OBJ)

clean:
		@rm -f $(OBJ)

fclean: clean
		rm -rf $(NAME) $(BONUS_OBJ)

re: 	fclean all

.PHONY: all clean fclean re bonus

