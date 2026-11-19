/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <kmanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:44:02 by kmanar            #+#    #+#             */
/*   Updated: 2026/11/19 13:44:02 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_putstr(char *str)
{
    int     i;
    int     count;
    int     back;

    i = 0;
    count = 0;

    if (!str)
    {
        if (write(1, "(null)", 6) == -1)
            return (-1);
        return (6);
    }

    while(str[i])
    {
        back =  ft_putchar(str[i]);
        if (back == - 1)
            return (-1);
        count += back;
        i++;
    }
    return (count);
}