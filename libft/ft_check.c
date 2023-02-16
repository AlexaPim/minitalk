/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:07:03 by ado-prad          #+#    #+#             */
/*   Updated: 2023/02/15 18:43:38 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_arg(char flag, va_list list)
{
	if (flag == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (flag == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (flag == 'd' || flag == 'i')
		return (ft_print_int(va_arg(list, int)));
	else if (flag == 'u')
		return (ft_print_unsigned(va_arg(list, unsigned int)));
	else if (flag == 'x' || flag == 'X')
		return (ft_print_hexa(va_arg(list, unsigned int), flag));
	else if (flag == 'p')
		return (ft_print_pointer(va_arg(list, unsigned long int)));
	else
		return (ft_putchar('%'));
}
