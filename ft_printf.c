/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-boud <mle-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:49:08 by mle-boud          #+#    #+#             */
/*   Updated: 2022/11/28 01:23:47 by mle-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

char	*choose_conv(char *str)
{}

int	ft_printf(const char *format, ...)
{
	va_list	to_print;
	char	*select;
	int		ret;

	va_start(to_print, format);
	// ret = ;
	va_end(to_print);
	return (ret);
}

// Mission
// Create file to convert the sentences
// Create function to chose which converstion use