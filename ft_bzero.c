/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 18:02:28 by fjenae            #+#    #+#             */
/*   Updated: 2019/04/22 18:34:21 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	unsigned char *dst;

	dst = b;
	if (len == 0)
		return (0);
	while (len)
	{
		*dst = '\0';
		dst++;
		len--;
	}
	return (b);
}
