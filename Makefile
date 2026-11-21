NAME = libftprintf.a

SRCS = ft_putchar.c ft_putstr.c ft_putunsigned.c ft_putnbr.c ft_puthex.c ft_putptr.c ft_printf.c


OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f