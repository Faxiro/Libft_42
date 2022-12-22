/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tleroy <tleroy@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:14:05 by tleroy            #+#    #+#             */
/*   Updated: 2022/12/10 19:47:11 by tleroy           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_size(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*number;
	int			size;
	int			i;

	i = 0;
	size = nbr_size(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	number = malloc(sizeof(char) * (size + 1));
	if (number == 0)
		return (0);
	if (n < 0)
	{
		number[i++] = '-';
		n *= -1;
	}
	number[size] = '\0';
	while (--size >= i)
	{
		number[size] = n % 10 + '0';
		n /= 10;
	}
	return (number);
}
