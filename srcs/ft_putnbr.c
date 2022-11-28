/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-boud <mle-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:35:34 by mle-boud          #+#    #+#             */
/*   Updated: 2022/11/28 14:16:21 by mle-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long	len_nb(int nb)
{
	long	len;

	len = 1;
	while (nb)
	{
		len *= 10;
		nb /= 10;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	long	nb;
	int		len;
	int		ret;

	len = len_nb(n) / 10;
	nb = n;
	if (nb == 0)
		return (write(1, "0", 1));
	if (nb < 0)
	{
		nb *= -1;
		ret = write(1, "-", 1);
		if (ret == -1)
			return (ret);
	}
	while (len)
	{
		if (ft_putchar(nb / len + '0') == -1)
			return (-1);
		ret++;
		nb %= len;
		len /= 10;
	}
	return (ret);
}
