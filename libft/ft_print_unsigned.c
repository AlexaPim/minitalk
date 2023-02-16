/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:31:59 by ado-prad          #+#    #+#             */
/*   Updated: 2023/02/15 18:44:08 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_unsigned(unsigned int n)
{
	unsigned int	nbr;

	nbr = 0;
	if (n <= 9)
		return (ft_putchar((n + 48)));
	else
	{
		nbr = nbr + ft_print_unsigned(n / 10);
		nbr = nbr + ft_putchar((n % 10) + 48);
	}
	return (nbr);
}
