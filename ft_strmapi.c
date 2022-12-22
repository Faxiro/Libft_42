/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faxiro <faxiro@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:51:20 by tleroy            #+#    #+#             */
/*   Updated: 2022/12/19 18:17:16 by faxiro           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mapi;

	i = -1;
	mapi = ft_strdup(s);
	if (mapi == 0)
		return (0);
	while (mapi[++i])
		mapi[i] = f(i, s[i]);
	return (mapi);
}
