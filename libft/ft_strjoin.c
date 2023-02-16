/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:37:39 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/15 19:41:53 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len;
	size_t	x;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	x = 0;
	while (*s1)
		res[x++] = *s1++;
	while (*s2)
		res[x++] = *s2++;
	res[x] = '\0';
	return (res);
}
