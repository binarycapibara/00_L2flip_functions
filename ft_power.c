/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 05:02:20 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/26 05:34:59 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int i, int n)
{
	int		k;
	int		res;
	
	res = n;
	k = 0;
	i--;
	while (k < i)
	{
		res = res * n;
		k++;
	}
	return (res);
}