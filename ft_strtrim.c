/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:50:46 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 02:07:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_charset(char c, const char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	size;
	size_t	i;
	size_t	copy;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (ft_is_charset(s1[i], set) == 1)
		i++;
	size = ft_strlen(s1) - 1;
	while (ft_is_charset(s1[size], set) == 1 && size > 0)
		size--;
	if (!(new_str = (char*)malloc(sizeof(char) * ((i + size) + 1))))
		return (NULL);
	new_str[i + size] = '\0';
	copy = 0;
	while (i < size + 1)
	{
		new_str[copy] = s1[i];
		i++;
		copy++;
	}
	return (new_str);
}
