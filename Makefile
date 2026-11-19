NAME = libftprintf.a

SRCS = ft_putchar.c ft_putstr.c

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f