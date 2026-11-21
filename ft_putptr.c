/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <kmanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 00:05:31 by kmanar            #+#    #+#             */
/*   Updated: 2026/11/21 00:05:31 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include "ft_printf.h" 

    int     ft_putptr(void *p)
    {
        unsigned long   address;
        int     count;

        count = 0;
        address = (unsigned long) p;
        count += ft_putstr("0x");
        count += ft_puthex(address, "0123456789abcdef");
        return (count);
    }