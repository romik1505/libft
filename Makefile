# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 14:36:18 by cniranye          #+#    #+#              #
#    Updated: 2019/09/26 22:11:29 by cniranye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libft.a
CC 		= 	gcc 
FLAGS 	= 	-Wall -Wextra -Werror

SRC_F	=	ft_atoi.c ft_bzero.c\
			ft_isalnum.c ft_isalpha.c\
			ft_isascii.c ft_isdigit.c\
			ft_isprint.c ft_memccpy.c\
			ft_memchr.c ft_memcmp.c\
			ft_memmove.c ft_memcpy.c\
			ft_memset.c ft_strcat.c\
			ft_strchr.c	ft_strcmp.c\
			ft_strcpy.c ft_strdup.c\
			ft_strlcat.c ft_strlen.c\
			ft_strncat.c ft_strncpy.c\
			ft_strnstr.c ft_strrchr.c\
			ft_strstr.c	ft_strncmp.c\
			ft_tolower.c ft_toupper.c

SRC_F	+=	ft_memalloc.c ft_memdel.c\
			ft_strnew.c ft_strdel.c\
			ft_strclr.c ft_itoa.c\
			ft_putchar_fd.c ft_putchar.c\
			ft_putstr.c ft_putstr_fd.c\
			ft_putendl_fd.c ft_putendl.c\
			ft_putnbr.c ft_putnbr_fd.c\
			ft_strequ.c ft_strnequ.c\
			ft_strmap.c ft_striter.c\
			ft_striteri.c ft_strjoin.c\
			ft_strmapi.c ft_strsplit.c\
			ft_strsub.c ft_strtrim.c\
		
SRC_F	+= 	ft_lstadd.c ft_lstdel.c\
			ft_lstdelone.c ft_lstiter.c\
			ft_lstmap.c ft_lstnew.c

SRC_F	+= 	ft_strnlen.c ft_isspace.c\
			ft_itoa_base.c ft_putll_base_fd.c\
			ft_strrev.c ft_intlen_base.c

OBJS	= 	$(SRC_F:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "libft created!"

%.o: %.c
	@$(CC) $(FLAGS) -c $< -I. -o $@ 

clean: 
	@rm -rf $(OBJS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re 