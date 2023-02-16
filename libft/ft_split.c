/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:26:09 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/22 22:26:13 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_untill_c(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static int	nmbr_of_word(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] != c && s[i])
				i++;
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**splitstr;

	i = 0;
	splitstr = (char **)ft_calloc((nmbr_of_word(s, c) + 1), sizeof(char *));
	if (!splitstr)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			splitstr[i] = (char *)ft_calloc((len_untill_c(s, c) + 1),
					sizeof(char));
			if (!splitstr[i])
				return (NULL);
			j = 0;
			while (*s != c && *s)
				splitstr[i][j++] = *s++;
			i++;
		}
	}
	return (splitstr);
}
