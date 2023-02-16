/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:38:31 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/22 20:48:21 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (s[len] != (unsigned char)c && len > 0)
	{
		len--;
	}
	if (s[len] == (unsigned char)c)
	{
		return ((char *)s + len);
	}
	return (NULL);
}
