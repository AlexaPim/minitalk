/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:20:19 by ado-prad          #+#    #+#             */
/*   Updated: 2023/02/15 18:43:59 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_int(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count = count + ft_putchar('-');
		count = count + ft_putchar('2');
		count = count + ft_print_int(147483648);
	}
	else if (n < 0)
	{
		count = count + ft_putchar('-');
		count = count + ft_print_int(-1 * n);
	}
	else if (n >= 0 && n <= 9)
		count = count + ft_putchar((n + 48));
	else
	{
		count = count + ft_print_int(n / 10);
		count = count + ft_putchar(((n % 10) + 48));
	}
	return (count);
}
