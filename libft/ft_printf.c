/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:01:33 by ado-prad          #+#    #+#             */
/*   Updated: 2023/02/15 18:43:23 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		count;

	count = 0;
	if (!format)
		return (-1);
	va_start (list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count = count + ft_check_arg(*format, list);
		}
		else
		{
			count = count + ft_putchar(*format);
		}
		format++;
	}
	va_end (list);
	return (count);
}
