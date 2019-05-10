/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 21:13:27 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/10 22:18:09 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1) - 1;
	len2 = ft_strlen(s2);
	i = -1;
	j = 0;
	if (!(join = (char*)malloc(sizeof(char) * (len1 + len2))))
		return (NULL);
	while (++i <= len1)
		join[i] = s1[i];
	while (i <= (len1 + len2))
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	return (join);
}
