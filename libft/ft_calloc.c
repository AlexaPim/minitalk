/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:36:07 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/15 19:38:49 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb * size == 0 || nmemb > 2147483647 / size)
		return ((void *)0);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return ((void *)0);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
