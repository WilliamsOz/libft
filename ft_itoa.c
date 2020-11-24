/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 15:37:56 by user42            #+#    #+#             */
/*   Updated: 2020/09/22 10:42:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlen(long n)
{
	int size;

	size = 1;
	while (n >= 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}

static char		*ft_itoa_pos(long n, char *nbr)
{
	int i;

	i = ft_intlen(n) - 1;
	if (n == 0)
	{
		nbr[i] = '0';
		return (nbr);
	}
	while (n > 0)
	{
		nbr[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (nbr);
}

static char		*ft_itoa_neg(long n, char *nbr)
{
	int i;

	i = ft_intlen(n);
	while (n > 0)
	{
		nbr[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	nbr[i] = '-';
	return (nbr);
}

char			*ft_itoa(int n)
{
	int		sign;
	int		size;
	char	*nbr;
	long	n_l;

	sign = 0;
	n_l = n;
	if (n_l < 0)
	{
		sign += 1;
		n_l *= -1;
	}
	size = ft_intlen(n_l);
	sign == 1 ? size++ : size + 0;
	if (!(nbr = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	nbr[size] = '\0';
	sign == 1 ? ft_itoa_neg(n_l, nbr) : ft_itoa_pos(n_l, nbr);
	return (nbr);
}
