/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:02:44 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/26 00:49:17 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*array;

	if (size > 2147483647)
		return (NULL);
	if ((array = (void*)malloc(size + 1)) == NULL)
		return (NULL);
	else
		ft_bzero(array, size + 1);
	return (array);
}
