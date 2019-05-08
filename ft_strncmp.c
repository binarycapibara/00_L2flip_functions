/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 19:25:07 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/07 20:02:51 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char 	*str1;
	unsigned char 	*str2;
	size_t			i;
	int 			res;
	
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	res = 0;
	while ((str1[i] || str2[i]) && i <= n)
	{
		if (str1[i] != str2[i])
			return (res = str1[i] - str2[i]);
		i++;
	}
	return (0);
}