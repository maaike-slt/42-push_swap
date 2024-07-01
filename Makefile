# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msloot <msloot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 19:19:04 by msloot            #+#    #+#              #
#    Updated: 2024/07/01 21:19:32 by msloot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP_NAME =	push_swap
CHECKER_NAME =		checker
CC = 	cc
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

SRC_NAME =	parse.c \
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
			checker/handle_action.c \

PUSH_SWAP_SRC_NAME = main.c $(SRC_NAME)
CHECKER_SRC_NAME = checker/main.c $(SRC_NAME)

# SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
PUSH_SWAP_SRC = $(addprefix $(SRC_PATH), $(PUSH_SWAP_SRC_NAME))
CHECKER_SRC = $(addprefix $(SRC_PATH), $(CHECKER_SRC_NAME))

PUSH_SWAP_OBJ_NAME = $(PUSH_SWAP_SRC_NAME:.c=.o)
PUSH_SWAP_OBJ = $(addprefix $(OBJ_PATH), $(PUSH_SWAP_OBJ_NAME))

CHECKER_OBJ_NAME = $(CHECKER_SRC_NAME:.c=.o)
CHECKER_OBJ = $(addprefix $(OBJ_PATH), $(CHECKER_OBJ_NAME))

# *************************************************************************** #

define	progress_bar
	i=0
	while [[ $$i -le $(words $(SRC_NAME) m m) ]] ; do \
		printf " " ; \
		((i = i + 1)) ; \
	done
	printf "$(B)]\r[$(GRE)"
endef

# *************************************************************************** #
#	RULES	#

all:		launch $(PUSH_SWAP_NAME) $(CHECKER_NAME)

launch:
	$(call progress_bar)

$(PUSH_SWAP_NAME):	$(PUSH_SWAP_OBJ) $(LIBNAME)	
	$(CC) $(CFLAGS) $(PUSH_SWAP_OBJ) $(LIBNAME) -o $(PUSH_SWAP_NAME)
	@printf "\n$(B)$(MAG)$(PUSH_SWAP_NAME) compiled$(D)\n"

$(CHECKER_NAME):	$(CHECKER_OBJ) $(LIBNAME)	
	$(CC) $(CFLAGS) $(CHECKER_OBJ) $(LIBNAME) -o $(CHECKER_NAME)
	@printf "\n$(B)$(MAG)$(CHECKER_NAME) compiled$(D)\n"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(dir $@) # 2> /dev/null || true
	$(CC) $(CFLAGS) $(LIBINC) -I$(INC) -c $< -o $@
	@printf "█"

$(LIBNAME):
	@$(MAKE) -C $(LIBPATH)

clean:
	@$(RM) $(OBJ_PATH)
	@$(MAKE) clean -C $(LIBPATH)
	@echo "$(B)cleared$(D)"

fclean:		clean
	@$(RM) $(PUSH_SWAP_NAME)
	@$(RM) $(CHECKER_NAME)
	@$(MAKE) fclean -C $(LIBPATH)

re:			fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
