/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleroy <tleroy@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:40:32 by tleroy            #+#    #+#             */
/*   Updated: 2022/12/02 15:35:28 by tleroy           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = -sign;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (sign == -1 && res == 214748364 && nptr[i] == '8')
			return (-2147483648);
		if (res != ((res * 10) + (nptr[i] - '0')) / 10)
			return (((sign + 1) / -2));
		res = (res * 10) + (nptr[i++] - '0');
	}
	return (sign * res);
}
