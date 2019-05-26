/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minoftwo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 05:31:03 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/26 19:42:39 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_minoftwo(int i, int m)
{
	if (i == m)
		return (i);
	if (i < m)
		return (i);
	else
		return (m);
}
