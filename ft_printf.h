/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <kmanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:34:46 by kmanar            #+#    #+#             */
/*   Updated: 2026/11/19 13:34:46 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int     ft_printf(const char *, ...);
int     ft_putchar(char c);
int     ft_putstr(char *str);
int     ft_putnbr(int n);
int     ft_putunsigned(unsigned int n);

#endif