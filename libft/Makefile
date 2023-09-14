# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 08:55:12 by lsilva-p          #+#    #+#              #
#    Updated: 2023/09/14 17:35:37 by lsilva-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

# Path Definition
SOURCES_PATH = ./src/
HEADER_PATH = ./includes/
BIN_PATH = ./bin/

# Colors Definition 
GREEN = "\033[32m"
RED = "\033[31m"
CYAN = "\033[36m"
COLOR_LIMITER = "\033[0m"

SOURCES = \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \

BONUS_SOURCES = \
	ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstmap_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c \

MANDATORY_OBJECTS = $(addprefix $(BIN_PATH), $(SOURCES:%.c=%.o))
BONUS_OBJECTS = $(addprefix $(BIN_PATH), $(BONUS_SOURCES:%.c=%.o))

all: $(BIN_PATH) $(NAME)

$(BIN_PATH)%.o: $(SOURCES_PATH)%.c
	@echo $(GREEN)[Compiling]$(COLOR_LIMITER) $(notdir $(<))...
	@echo "⋅•⋅⋅•⋅⊰⋅•⋅⋅•⋅⋅•⋅⋅•⋅∙∘☽✦☾∘∙•⋅⋅⋅•⋅⋅⊰⋅•⋅⋅•⋅⋅•⋅⋅•⋅"
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_PATH)

$(NAME): $(MANDATORY_OBJECTS) $(BONUS_OBJECTS)
	@echo	   "╔═══════*.·:·..·:·.☽✧ ✦ ✧☾.·:·...·:·.*═══════╗"
	@echo	   '|'---------$(CYAN)libftprintf.a was created!$(COLOR_LIMITER)---------'|'
	@echo	   "╚═══════*.·:·..·:·.☽✧ ✦ ✧☾.·:·...·:·.*═══════╝"
	@echo " "
	@ar rcs $(NAME) $?

$(BIN_PATH):
	@mkdir -p $(BIN_PATH)

clean:
	@echo $(RED)[Removing Objects...]$(COLOR_LIMITER)
	@rm -rf $(BIN_PATH)

fclean: clean
	@echo $(RED)[Removing $(NAME)...]$(COLOR_LIMITER)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
