# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jknyzhen <jknyzhen@42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 13:48:03 by jknyzhen          #+#    #+#              #
#    Updated: 2022/12/27 14:29:09 by jknyzhen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_memset.c  \
  ft_bzero.c  \
  ft_memcpy.c  \
  ft_memmove.c  \
  ft_memchr.c  \
  ft_memcmp.c  \
  ft_isalpha.c \
  ft_isascii.c \
  ft_isdigit.c \
  ft_isalnum.c \
  ft_isprint.c \
  ft_tolower.c \
  ft_toupper.c \
  ft_strchr.c  \
  ft_atoi.c  \
  ft_strlen.c  \
  ft_strlcat.c \
  ft_strlcpy.c \
  ft_strncmp.c \
  ft_strrchr.c \
  ft_strnstr.c \
  ft_calloc.c \

#SRCSB = $(SRCS)    \
  ft_lstadd_back.c \
  ft_lstadd_front.c \
  ft_lstclear.c  \
  ft_lstdelone.c  \
  ft_lstiter.c  \
  ft_lstlast.c  \
  ft_lstmap.c   \
  ft_lstnew.c   \
  ft_lstsize.c  \

NAME = libft.a

# OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
# OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

#OBJSB = $(SRCSB:.c=.o)
#OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

# $(OBJS_DIR)%.o : %.c libft.h
# 	@mkdir -p $(OBJS_DIR)
# 	@echo "Compiling: $<"
# 	@gcc $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Libft Done !"

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# bonus: $(OBJECTS_BONUS_PREFIXED)
# 	@ar r $(NAME) $(OBJECTS_BONUS_PREFIXED)
# 	@echo "Libft Bonus Done"