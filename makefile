# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/30 17:04:58 by jfox              #+#    #+#              #
#    Updated: 2026/01/24 13:50:55 by jfox             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJECT_DIR ?= ./object_files
SRC_DIR = ./src
INC_DIR = ./header

SRCC = push_swap.c push_swap_input_utils.c push_swap_input_check.c \
push_swap_sort_utils.c push_swap_param_swap.c push_swap_param_push.c \
push_swap_param_rotate.c push_swap_param_reverse.c \
push_swap_sort_long.c push_swap_sort_short.c

OFILES = $(SRCC:%.c=$(OBJECT_DIR)/%.o)
CC = cc
CFLAGS += -Wall -Wextra -Werror -g -I$(INC_DIR) -MMD -MP
NAME = pushswap.a
EXECUTABLE = push_swap

all: $(EXECUTABLE)

$(OBJECT_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJECT_DIR)
	@$(CC) -o $@ -c $< $(CFLAGS)

$(EXECUTABLE): print_make $(NAME)
	@$(CC) $(CFLAGS) -o $(EXECUTABLE) $(NAME) libft.a
	@echo "The push_swap Executable has been made."
	@echo "!!! MAKE COMPLETE !!!"

$(NAME): $(OFILES)
	@ar rcs $(NAME) $(OFILES)
	@echo "The push_swap Library and Object_Files have been made."
	@$(MAKE) -C libft

clean: print_clean
	@rm -rf $(OBJECT_DIR)
	@echo "The push_swap and libft Object_Files were removed successfully."

fclean: clean
	@rm -f $(NAME)
	@echo "The push_swap Library was removed successfully."
	@$(MAKE) fclean -C libft
	@rm -f $(EXECUTABLE)
	@echo "The push_swap Executable was removed successfully."

re: print_re fclean $(EXECUTABLE)

print_make:
	@echo "\033[32m"
	@echo " ███╗   ███╗ █████╗ ██╗  ██╗███████╗"
	@echo " ████╗ ████║██╔══██╗██║ ██╔╝██╔════╝"
	@echo " ██╔████╔██║███████║█████╔╝ █████╗  "
	@echo " ██║╚██╔╝██║██╔══██║██╔═██╗ ██╔══╝  "
	@echo " ██║ ╚═╝ ██║██║  ██║██║  ██╗███████╗"
	@echo " ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝"
	@echo "\033[0m"

print_clean:
	@echo "\033[33m"
	@echo "  ██████╗██╗     ███████╗ █████╗ ███╗   ██╗"
	@echo " ██╔════╝██║     ██╔════╝██╔══██╗████╗  ██║"
	@echo " ██║     ██║     █████╗  ███████║██╔██╗ ██║"
	@echo " ██║     ██║     ██╔══╝  ██╔══██║██║╚██╗██║"
	@echo " ╚██████╗███████╗███████╗██║  ██║██║ ╚████║"
	@echo "  ╚═════╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝"
	@echo "\033[0m"

print_re:
	@echo "\033[31m"
	@echo " ██████╗ ███████╗"
	@echo " ██╔══██╗██╔════╝"
	@echo " ██████╔╝█████╗  "
	@echo " ██╔══██╗██╔══╝  "
	@echo " ██║  ██║███████╗"
	@echo " ╚═╝  ╚═╝╚══════╝"
	@echo "\033[0m"
	@echo "Rebuilding the Executable."

.PHONY: all clean fclean re print_make print_clean print_re

-include $(OFILES:.o=.d)