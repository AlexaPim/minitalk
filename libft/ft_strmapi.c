/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:38:06 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/20 23:46:03 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s,
	char (*f)(unsigned int, char))
{
	int		i;
	char	*nwstr;

	i = 0;
	nwstr = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!nwstr)
		return (NULL);
	while (s[i] != '\0')
	{
		nwstr[i] = f(i, s[i]);
		i++;
	}
	return (nwstr);
}
