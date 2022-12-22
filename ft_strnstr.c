/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleroy <tleroy@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:11:35 by tleroy            #+#    #+#             */
/*   Updated: 2022/12/07 14:46:08 by tleroy           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *full_str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (to_find[0] == '\0')
		return (((char *)full_str));
	while (full_str[++i] && i < len)
	{
		j = 0;
		while (full_str[i + j] == to_find[j])
		{
			if ((i + j) == len)
				return (0);
			if (to_find[j + 1] == '\0')
				return (&((char *)full_str)[i]);
			j++;
		}
	}
	return (0);
}
