/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:37:46 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/22 20:11:49 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	c;
	size_t	k;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	c = 0;
	k = i;
	if (size <= i)
	{
		return (j + size);
	}
	else
	{
		while (i < size - 1 && src[c] != '\0')
		{
			dst[i] = ((char *)src)[c];
			i++;
			c++;
		}
		dst[i] = '\0';
	}
	return (k + j);
}
