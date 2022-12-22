/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleroy <tleroy@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:09:41 by tleroy            #+#    #+#             */
/*   Updated: 2022/12/22 18:08:54 by tleroy           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_str(char const *s, char c)
{
	size_t	i;
	size_t	nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			nbr++;
		}
		else
			i++;
	}
	return (nbr);
}

static char	**free_mallocs(char **split)
{
	size_t	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
	return (0);
}

static char	**fill_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		j = i;
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			split[count] = ft_substr(s, j, i - j);
			if (!split[count])
				return (free_mallocs(split));
			count++;
		}
		else
			i++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	nbr;
	char	**split;

	if (!s)
		return (0);
	nbr = nbr_str(s, c);
	split = (char **)ft_calloc(nbr + 1, sizeof(char *));
	if (split == 0)
		return (0);
	fill_split(split, s, c);
	return (split);
}
