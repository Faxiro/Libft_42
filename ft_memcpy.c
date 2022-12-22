/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faxiro <faxiro@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:40:33 by tleroy            #+#    #+#             */
/*   Updated: 2022/12/09 20:01:09 by faxiro           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (dest == 0 && src == 0)
		return (0);
	while (++i < n)
		((char *)dest)[i] = ((char *)src)[i];
	return (dest);
}
