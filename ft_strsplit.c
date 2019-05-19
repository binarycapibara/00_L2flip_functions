/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 18:51:23 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/20 02:13:29 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**ft_typeinchars(char **work, char const *s, char c, size_t co)
{
	size_t	i;
	size_t	m;
	size_t	len;

	i = 0;
	m = 0;
	len = 0;
	while (s[i] && (len <= co))
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				work[len][m] = s[i];
				i++;
				m++;
			}
			work[len][m] = '\0';
			m = 0;
			len++;
		}
		i++;
	}
	work[len] = 0;
	return (work);
}

static	size_t	ft_nofwords(char const *s, char c)
{
	size_t	i;
	size_t	co;

	i = 0;
	co = 0;
	while (s[i])
	{
		if ((s[i - 1] == c) && (s[i] != c))
		{
			co++;
			while (s[i] != c && s[i])
				i++;
		}
		if (!((s[i - 1] == c) && (s[i] != c)))
		{
			if ((s[i + 1] == c) && (s[i] != c))
				co++;
		}
		i++;
	}
	return (co);
}

static	char	**ft_words(char **work, char const *s, char c, size_t co)
{
	size_t	i;
	size_t	m;
	size_t	len;

	i = 0;
	m = 0;
	len = 0;
	while (s[i] && (len <= co))
	{
		if (s[i] != c && s[i])
		{
			m = 0;
			while (s[i] != c && s[i])
			{
				m++;
				i++;
			}
			if (!(work[len] = (char *)malloc(sizeof(char) * (m + 1))))
				return (NULL);
			len++;
		}
		i++;
	}
	return (work);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**work;
	size_t	co;

	if (!s || !c)
		return (NULL);
	co = ft_nofwords(s, c);
	if (!(work = (char **)malloc(sizeof(char *) * (co + 1))))
		return (NULL);
	work = ft_words(work, s, c, co);
	work = ft_typeinchars(work, s, c, co);
	return (work);
}
