/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:50:46 by user42            #+#    #+#             */
/*   Updated: 2020/11/25 12:35:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // ne pas faire d'index -1

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
	size = ft_strlen(s1);
	i = 0;
	copy = 0;
	while (s1[i] != '\0' && ft_is_charset(s1[i], set) == 1)
		i++;
	while (size - 1 > i && ft_is_charset(s1[size - 1], set) == 1)
		size--;
	if (!(new_str = (char*)malloc(sizeof(char) * ((size - i) + 1))))
		return (NULL);
	while (s1[i] != '\0' && i < size)
	{
		new_str[copy] = s1[i];
		copy++;
		i++;
	}
	new_str[copy] = '\0';
	return (new_str);
}
