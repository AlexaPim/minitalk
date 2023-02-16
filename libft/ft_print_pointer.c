/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:31:55 by ado-prad          #+#    #+#             */
/*   Updated: 2023/02/15 18:44:04 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_pointer(unsigned long int ptr)
{
	int	res;

	res = 0;
	if (!ptr)
	{
		res = res + write (1, "(nil)", 5);
		return (res);
	}
	else
	{
		res = write (1, "0x", 2);
		res = res + ft_print_hexa(ptr, 'x');
	}
	return (res);
}
