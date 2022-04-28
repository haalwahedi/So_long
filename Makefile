# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halwahed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 13:49:34 by halwahed          #+#    #+#              #
#    Updated: 2022/03/08 13:49:39 by halwahed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re make norm

NAME = so_long
LIBFT = libft/libft.a
LIBMLX = mlx/libmlx.a

#//////////////////////////////////////////////////////////////////////////////
#		ALL FILES
#//////////////////////////////////////////////////////////////////////////////

SRCS =	sl_src/sl_utlis.c sl_src/so_long.c			sl_src/sl_game_loop.c	sl_src/sl_solve_problems.c			

HEAD =	sl_inc/so_long.h			sl_inc/sl_keys.h

#//////////////////////////////////////////////////////////////////////////////
#		COMMAND SHORTCUTS
#//////////////////////////////////////////////////////////////////////////////

CC = gcc
CF = -Wall -Werror -Wextra
SL = -framework OpenGL -framework AppKit
CI = -I sl_inc/

AR = ar rcs
RM = rm -rf

#//////////////////////////////////////////////////////////////////////////////
#		RULES
#//////////////////////////////////////////////////////////////////////////////

all: ${NAME}

# Binary creation

${NAME}: ${SRCS} ${HEAD} ${LIBFT} ${LIBMLX}
	${CC} ${CF} ${CI} ${SL} ${SRCS} ${LIBFT} ${LIBMLX} -o ${NAME}

${LIBFT}:
	make -C libft/

${LIBMLX}:
	make -C mlx/

# Mandatory rules

clean:
	${RM}

fclean: clean
	${RM} ${NAME}
	make fclean -C libft/
	make clean -C mlx/

re: fclean all
