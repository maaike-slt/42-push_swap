# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msloot <msloot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 19:19:04 by msloot            #+#    #+#              #
#    Updated: 2024/06/19 21:44:51 by msloot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	push_swap
CC = 	cc
AR =	ar rcs
RM = 	rm -rf

CFLAGS =	-Wall -Werror -Wextra
CFLAGS +=	-g
# CFLAGS +=	-fsanitize=address

# **************************************************************************** #
#	MAKEFILE	#

MAKEFLAGS += --silent

SHELL := bash

B =		$(shell tput bold)
BLA =	$(shell tput setaf 0)
RED =	$(shell tput setaf 1)
GRE =	$(shell tput setaf 2)
YEL =	$(shell tput setaf 3)
BLU =	$(shell tput setaf 4)
MAG =	$(shell tput setaf 5)
CYA =	$(shell tput setaf 6)
WHI =	$(shell tput setaf 7)
D =		$(shell tput sgr0)
BEL =	$(shell tput bel)
CLR =	$(shell tput el 1)

# **************************************************************************** #
#	 LIB	#

LIBPATH =	./libft/
LIBNAME =	$(LIBPATH)libft.a
LIBINC =	-I$(LIBPATH)

# **************************************************************************** #
#	SOURCE	#

SRC_PATH =	./src/
OBJ_PATH =	./obj/
INC =		./inc/

SRC_NAME =	main.c parse.c \
			check/double_nbr.c check/in_order.c \
			solve/solve.c \
			solve/start.c solve/loop.c solve/three.c solve/end.c \
			solve/cheapest.c solve/cost.c \
			solve/calc_direction.c solve/find_dest.c solve/sort_to.c \
			solve/rotate_donut.c \
			stack/ft_stack_add_front.c stack/ft_stack_add_back.c \
			stack/ft_stack_new.c stack/ft_node_new.c stack/ft_stack_remove_head.c \
			stack/ft_stack_clear.c stack/ft_node_free.c \
			stack/ft_stack_print.c \
			action/sx.c action/sa.c action/sb.c action/ss.c action/pa.c action/pb.c \
			action/ra.c action/rb.c action/rr.c action/rs.c \
			action/rra.c action/rrb.c action/rrr.c action/rrs.c \

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

# SRC =		$(wildcard $(SRC_PATH)*.c) $(wildcard $(SRC_PATH)**/*.c)
# SRC_NAME =	$(subst $(SRC_PATH), , $(SRC))

OBJ_NAME =	$(SRC_NAME:.c=.o)
OBJ =		$(addprefix $(OBJ_PATH), $(OBJ_NAME))

# *************************************************************************** #

define	progress_bar
	i=0
	while [[ $$i -le $(words $(SRC)) ]] ; do \
		printf " " ; \
		((i = i + 1)) ; \
	done
	printf "$(B)]\r[$(GRE)"
endef

# *************************************************************************** #
#	RULES	#

all:		launch $(NAME)
	@printf "\n$(B)$(MAG)$(NAME) compiled$(D)\n"

launch:
	$(call progress_bar)

$(NAME):	$(OBJ) $(LIBNAME)
	$(CC) $(CFLAGS) $(OBJ) $(LIBNAME) -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(dir $@) # 2> /dev/null || true
	$(CC) $(CFLAGS) $(LIBINC) -I$(INC) -c $< -o $@
	@printf "█"

$(LIBNAME):
	@printf "$(D)$(B)$(BLU)\n$(NAME) objects compiled\n\n$(D)"
	@$(MAKE) -C $(LIBPATH)

clean:
	@$(RM) $(OBJ_NAME)
	@$(MAKE) clean -C $(LIBPATH)
	@echo "$(B)cleared$(D)"

fclean:		clean
	@$(RM) $(OBJ_PATH)
	@$(RM) $(NAME)
	@$(MAKE) fclean -C $(LIBPATH)

re:			fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
