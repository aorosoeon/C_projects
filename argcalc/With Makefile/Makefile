# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achuzhyk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 16:34:04 by achuzhyk          #+#    #+#              #
#    Updated: 2017/08/17 17:33:07 by achuzhyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
OBJECT = lid.a
NAME = calc
MAIN = main.c
SRCS = conditions.c dcounter.c ten.c fnum.c doop.c
CPLAGS = -Wall -Wextra -Werror -o 
HEADER = -I.

allcomp:
		$(CC) -g -O -c $(SRCS)
		ar cr $(OBJECT) *.o
		$(CC) $(CPLAGS) $(NAME) $(MAIN) $(OBJECT) $(HEADER)
		rm -f *.o

comp:
		$(CC) $(CPLAGS) $(NAME) $(MAIN) $(OBJECT) $(HEADER)

clean:
		rm -f $(NAME) $(OBJECT) 

re: clean allcomp
