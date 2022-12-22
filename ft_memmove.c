/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleroy <tleroy@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:41:00 by tleroy            #+#    #+#             */
/*   Updated: 2022/12/16 16:14:47 by tleroy           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	size_t	i;

	i = -1;
	temp = ((char *)src);
	if (dest == 0 && src == 0)
		return (0);
	if (dest > src)
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = temp[n - 1];
			n--;
		}
	}
	else
	{
		while (++i < n)
			((char *)dest)[i] = temp[i];
	}
	return (dest);
}
