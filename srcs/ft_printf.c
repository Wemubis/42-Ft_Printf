/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-boud <mle-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:49:08 by mle-boud          #+#    #+#             */
/*   Updated: 2022/11/28 16:53:16 by mle-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	conversion(va_list parg, char *format)
{
	int	x;

	x = 0;
	if (format[1] == 'c')
		x = write(1, va_arg(parg, char), 1);
	else if (format[1] == 's')
		x = write(1, va_arg(parg, char *), ft_strlen(va_arg(parg, char *)));
	else if (format[1] == 'p')
		x = ft_putptr_hexa(va_arg(parg, void *), "0123456789abdef");
	else if (format[1] == 'd')
		x = ;
	else if (format[1] == 'i')
		x = ft_putnbr(va_arg(parg, int));
	else if (format[1] == 'u')
		x = ;
	else if (format[1] == 'x')
		x = ft_putnbr_hexa(va_arg(parg, int), "0123456789abdef");
	else if (format[1] == 'X')
		x = ft_putnbr_hexa(va_arg(parg, int), "0123456789ABCDEF");
	else if (format[1] == '%')
		x = write(1, '%', 1);
	return (x);
}

static int	to_print(va_list parg, char *format)
{
	int	ret;
	int	i;

	i = 0;
	if (format[i] == '%' && format[i + 1])
	{
		ret = conversion(parg, format);
		if (ret == 0)
			if (write(1, format[i], 1) == -1)
				return (-1);
		else if (ret == -1)
			return (free(ret), -1);
		format++;
	}
	else
		if (write(1, format[i], 1) == -1)
			return (-1);
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list	parg;
	int		ret;
	int		tmp;

	ret = 0;
	va_start(parg, format);
	while (*format)
	{
		ret += to_print(parg, format);
		format++;
	}
	va_end(parg);
	return (ret);
}

// Mission
// Create file to convert the sentences
// Create function to chose which converstion use
//
// Return the number of characters output, or a negative value
// if an output error occurs. The ending null character is not counted.