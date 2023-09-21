# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsilva-p <lsilva-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 15:25:42 by lsilva-p          #+#    #+#              #
#    Updated: 2023/09/12 13:28:45 by lsilva-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 					= libftprintf.a
LIB_NAME 				= libft/libft.a
CFLAGS 					= -Wall -Wextra -Werror

#	--		PATH DEFINITION			--
BIN_PATH 				= ./bin/
LIB_BIN_PATH 			= ./libft/bin/
MANDATORY_HEADER_PATH 	= ./mandatory/include/
MANDATORY_SOURCES_PATH 	= ./mandatory/src/
BONUS_HEADER_PATH		= ./bonus/include/
BONUS_SOURCES_PATH 		= ./bonus/src/

#	--		COLOR DEFINITION		--
GREEN 					= "\033[32m"
RED 					= "\033[31m"
CYAN 					= "\033[36m"
COLOR_LIMITER 			= "\033[0m"

#	--		SOURCES DEFINITION		--
SOURCES 				= \
						ft_printf.c \
						ft_putchar.c \
						ft_putnbr_base.c \
						ft_putptr.c \
						ft_putstr.c \

BONUS_SOURCES 			= \
						ft_printf_bonus.c \
						ft_putchar_bonus.c \
						ft_puthexa_bonus.c \
						ft_putnbr_base_bonus.c \
						ft_putplus_and_space_bonus.c \
						ft_putptr_bonus.c \
						ft_putstr_bonus.c \

#	--		OBJECTS DEFINITION		--	
OBJECTS 				= $(addprefix $(BIN_PATH), $(SOURCES:%.c=%.o))
BONUS_OBJECTS 			= $(addprefix $(BIN_PATH), $(BONUS_SOURCES:%.c=%.o))

#	--		VERIFICATION OF FILES		--
PRINTF_MANDATORY 		= ft_printf.o
MANDATORY_CHECK 		= $(shell ar -t $(NAME) $(PRINTF_MANDATORY) 2>&1)

PRINTF_BONUS 			= ft_printf_bonus.o
BONUS_CHECK 			= $(shell ar -t $(NAME) $(PRINTF_BONUS) 2>&1)

ifneq ($(BONUS_CHECK), $(PRINTF_BONUS))
all: libft $(BIN_PATH) $(NAME)
endif

libft:
ifeq ($(wildcard $(LIB_NAME)),)
	@make -C ./libft --no-print-directory
	@cp $(LIB_NAME) $(NAME)
endif

$(BIN_PATH)%.o: $(MANDATORY_SOURCES_PATH)%.c
	@echo $(GREEN)[Compiling]$(COLOR_LIMITER) $(notdir $(<))...
	@echo "⋅•⋅⋅•⋅⊰⋅•⋅⋅•⋅⋅•⋅⋅•⋅∙∘☽✦☾∘∙•⋅⋅⋅•⋅⋅⊰⋅•⋅⋅•⋅⋅•⋅⋅•⋅"
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(MANDATORY_HEADER_PATH)

$(NAME): $(OBJECTS)
	@echo	   "╔═══════*.·:·..·:·.☽✧ ✦ ✧☾.·:·...·:·.*═══════╗"
	@echo	   '|'---------$(CYAN)libftprintf.a was created!$(COLOR_LIMITER)---------'|'
	@echo	   "╚═══════*.·:·..·:·.☽✧ ✦ ✧☾.·:·...·:·.*═══════╝"
	@echo " "
	@ar rcs $(NAME) $?

$(BIN_PATH):
	@mkdir -p $(BIN_PATH)

ifeq ($(MANDATORY_CHECK), $(PRINTF_MANDATORY))
bonus: fclean libft
	@make --no-print-directory \
	OBJECTS="$(BONUS_OBJECTS)" \
	MANDATORY_HEADER_PATH="$(BONUS_HEADER_PATH)" \
	MANDATORY_SOURCES_PATH="$(BONUS_SOURCES_PATH)"
else
bonus: libft
	@make --no-print-directory \
	OBJECTS="$(BONUS_OBJECTS)" \
	MANDATORY_HEADER_PATH="$(BONUS_HEADER_PATH)" \
	MANDATORY_SOURCES_PATH="$(BONUS_SOURCES_PATH)"
endif

clean:
	@echo $(RED)--------------[Removing Objects]--------------$(COLOR_LIMITER)
	@rm -rf $(BIN_PATH) $(LIB_BIN_PATH)

fclean: clean
	@echo "⋅•⋅⋅•⋅⊰⋅•⋅⋅•⋅⋅•⋅⋅•⋅∙∘☽✦☾∘∙•⋅⋅⋅•⋅⋅⊰⋅•⋅⋅•⋅⋅•⋅⋅•⋅"
	@echo $(RED)-----------[Removing $(NAME)]-----------$(COLOR_LIMITER)
	@rm -f $(NAME) $(LIB_NAME)

re: fclean
	@make --no-print-directory

.PHONY: all clean fclean re libft bonus