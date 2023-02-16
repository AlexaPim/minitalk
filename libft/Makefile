# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 20:26:28 by ado-prad          #+#    #+#              #
#    Updated: 2023/02/09 16:02:09 by ado-prad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall\
		-Wextra\
		-Werror

SRC = ft_bzero.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isprint.c\
ft_isdigit.c\
ft_strlen.c \
ft_tolower.c\
ft_toupper.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_strdup.c\
ft_memset.c\
ft_strlcpy.c\
ft_atoi.c\
ft_memcmp.c\
ft_strlcat.c\
ft_memcpy.c\
ft_memmove.c\
ft_memchr.c\
ft_calloc.c\
ft_strtrim.c\
ft_substr.c\
ft_strmapi.c\
ft_strjoin.c\
ft_itoa.c\
ft_strnstr.c\
ft_striteri.c\
ft_split.c\
ft_printf.c\
ft_check.c\
ft_print_hexa.c\
ft_print_int.c\
ft_print_pointer.c\
ft_print_char_and_string.c\
ft_print_unsigned.c\
get_next_line.c\
get_next_line_utils.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc $(FLAGS) -c $(SRC)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	

