/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <kmanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 19:46:49 by kmanar            #+#    #+#             */
/*   Updated: 2026/11/20 19:46:49 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_check_format(va_list *args, char c)
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

int ft_printf(const char *format, ...)
{
    va_list     args;
    int     i;
    int     count;   
    int     number;
    char    *str;

    i = 0;
    count = 0;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
    {
        count += ft_check_format(&args, format[i + 1]);
        i++;
    }
        // if (format[i] == '%')
        // {
        //     if (format[i + 1] == 'd' || format[i + 1] == 'i')    
        //     {
        //         number = va_arg(args, int);
        //         count += ft_putnbr(number);
        //         i++;
        //     }
        //     else if (format[i + 1] == 's')
        //         count += ft_putstr();
        //     else if (format[i + 1] == '%')
        //         count += write (1, '%', 1);

        // }
        else
        {
            count += ft_putchar(format[i]);
        }        
        i++;
    }
    va_end(args);
    return (count);
}
