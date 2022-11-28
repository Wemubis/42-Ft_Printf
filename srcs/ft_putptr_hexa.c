/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-boud <mle-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:55:17 by mle-boud          #+#    #+#             */
/*   Updated: 2022/11/28 17:15:11 by mle-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_hexa(__UINTPTR_TYPE__ n, char *base)
{
	long	nb;
	long	len;
	int		ret;

	nb = n;
	len = ft_length_nbr(nb);
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
		if (ft_putchar(base[nb / len]) == -1)
			return (-1);
		ret++;
		nb %= len;
		len /= 16;
	}
	return (ret);
}
