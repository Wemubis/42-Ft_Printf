/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-boud <mle-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:44:52 by mle-boud          #+#    #+#             */
/*   Updated: 2022/11/28 17:12:40 by mle-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*-------------------------HEAD-------------------------*/

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

/*-------------------------FCTN-------------------------*/

/*----------------CORE----------------*/
int		ft_printf(const char *format, ...);

/*---------------FT-STR---------------*/
size_t	ft_strlen(char *s);

/*---------------FT-PUT---------------*/
int		ft_putchar(int c);
int		ft_putnbr(int n);
int		ft_putnbr_hexa(int n, char *base);
int		ft_putptr_hexa(void *ptr, char *base);

#endif
