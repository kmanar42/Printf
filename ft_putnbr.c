/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <kmanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 21:46:12 by kmanar            #+#    #+#             */
/*   Updated: 2026/11/25 17:20:38 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_rec(long n)
{
	int	back;
	int	count;

	count = 0;
	if (n >= 10)
	{
		back = ft_rec(n / 10);
		if (back == -1)
			return (-1);
		count += back;
	}
	back = ft_putchar((n % 10) + '0');
	if (back == -1)
		return (-1);
	count += back;
	return (count);
}

int	ft_putnbr(int nbr)
{
	long	n;
	int		count;
	int		back;

	n = nbr;
	count = 0;
	if (n < 0)
	{
		n = -n;
		back = ft_putchar('-');
		if (back == -1)
			return (-1);
		count += back;
	}
	back = ft_rec(n);
	if (back == -1)
		return (-1);
	count += back;
	return (count);
}
