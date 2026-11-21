/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <kmanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 18:43:20 by kmanar            #+#    #+#             */
/*   Updated: 2026/11/20 18:43:20 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_puthex(unsigned long n, char *base)
{
    int     count;
    int     back;

    count = 0;
    if (n >= 16)
    {
            back = ft_puthex(n / 16, base);
        if (back == -1)
            return (-1);
        count += back;
    }
    back = ft_putchar(base[n % 16]);
    if (back == -1)
        return (-1);
    count += back;
    return (count);
}