/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:33:35 by user42            #+#    #+#             */
/*   Updated: 2020/09/21 11:26:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptrs;
	size_t	i;

	i = 0;
	ptrs = (char*)s;
	while (ptrs[i] != '\0')
	{
		if (ptrs[i] == c)
			return (ptrs + i);
		else
			i++;
	}
	if (ptrs[i] == c)
		return (ptrs + i);
	else
		return (NULL);
}
