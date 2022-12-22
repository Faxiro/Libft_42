/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faxiro <faxiro@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:58:26 by tleroy            #+#    #+#             */
/*   Updated: 2022/12/19 18:16:09 by faxiro           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		size;
	int		i;

	i = -1;
	size = ft_strlen(s);
	dup = malloc(sizeof(char) * size + 1);
	if (dup == 0)
		return (0);
	while (++i < size)
		dup[i] = s[i];
	dup[i] = 0;
	return (dup);
}
