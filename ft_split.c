/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 15:03:21 by user42            #+#    #+#             */
/*   Updated: 2020/11/25 12:14:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ajouter une fonction pour free en cas d'erreur de malloc

static int		get_size(char const *s, char c, int size)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i] != '\0')
				i++;
		}
		else
		{
			size++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (size);
}

static char		**ft_mal_str_in_tab(char const *s, char c, char **tab, int i)
{
	int count;
	int size;

	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			size = 0;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
				size++;
			}
			if (!(tab[count] = (char*)malloc(sizeof(char) * (size + 1))))
				return (NULL);
			tab[count][size] = '\0';
			count++;
		}
		else
			i++;
	}
	return (tab);
}

static char		**ft_copy_str_in_tab(char const *s, char c, char **tab)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] != c && s[i] != '\0')
			{
				tab[count][j] = s[i];
				j++;
				i++;
			}
			count++;
		}
		else
			i++;
	}
	return (tab);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		size;

	if (s == NULL)
		return (NULL);
	size = get_size(s, c, 0);
	if (!(tab = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	tab[size] = NULL;
	tab = ft_mal_str_in_tab(s, c, tab, 0);
	tab = ft_copy_str_in_tab(s, c, tab);
	return (tab);
}
