/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleroy <tleroy@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:45:42 by tleroy            #+#    #+#             */
/*   Updated: 2022/12/16 19:14:44 by tleroy           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;
	unsigned int	s_len;

	if (s == 0)
		return (0);
	i = -1;
	s_len = ft_strlen(s);
	if (s_len <= start)
		len = 0;
	else if (s_len < start + len)
		len = s_len - start;
	new = malloc(sizeof(char) * (len + 1));
	if (new == 0)
		return (0);
	while (++i < len)
		new[i] = s[start + i];
	new[i] = '\0';
	return (new);
}
