/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleroy <tleroy@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:29:33 by tleroy            #+#    #+#             */
/*   Updated: 2022/12/10 18:05:33 by tleroy           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = -1;
	src_len = ft_strlen(src);
	if (!dest || !src)
		return (src_len);
	if (size == 0)
		return (src_len);
	while (src[++i] && i < (size - 1))
		dest[i] = ((char *)src)[i];
	dest[i] = '\0';
	return (src_len);
}
