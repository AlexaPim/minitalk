/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:37:07 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/13 23:26:14 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			(((unsigned char *)dest)[n] = ((unsigned char *)src)[n]);
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}	
