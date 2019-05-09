/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:02:44 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/09 14:20:57 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*array;

	if ((array = (void*)malloc(size + 1)) == NULL)
		return (NULL);
	else
		ft_bzero(array, size + 1);
	return (array);
}
