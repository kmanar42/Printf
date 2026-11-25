/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <kmanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 22:58:08 by kmanar            #+#    #+#             */
/*   Updated: 2026/11/25 17:13:19 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	back;
	int	count;

	count = 0;
	if (n >= 10)
	{
		back = ft_putunsigned(n / 10);
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
