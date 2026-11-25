/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <kmanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 19:46:49 by kmanar            #+#    #+#             */
/*   Updated: 2026/11/25 17:04:30 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(va_list *args, char c)
{
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(*args, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'x')
		return (ft_puthex(va_arg(*args, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), "0123456789ABCDEF"));
	else if (c == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	return (0);
}

static int	ft_handle_format(va_list *args, const char **format)
{
	if (*(*format + 1) == '\0')
		return (-1);
	(*format)++;
	return (ft_check_format(args, **format));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		back;

	count = 0;
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			back = ft_handle_format(&args, &format);
		else
			back = ft_putchar(*format);
		if (back == -1)
			return (va_end(args), -1);
		count += back;
		format++;
	}
	va_end(args);
	return (count);
}
