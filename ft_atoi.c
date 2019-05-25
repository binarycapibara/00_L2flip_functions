/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 18:16:46 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/24 21:46:42 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_of(long c, const char *str, int sign)
{
	long	check;
	long	check2;

	check = (long)c;
	check2 = (long)c;
	check2 = check;
	check = check * 10 + (str[0] - '0');
	if (check2 == ((check - (str[0] - '0')) / 10))
		return (1);
	else
		return (sign > 0 ? -1 : 0);
}

int			ft_atoi(const char *str)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	sign = +1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (ft_of(res, str + i, sign) == 0 || ft_of(res, str + i, sign) == -1)
			return (ft_of(res, str, sign));
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(res * sign));
}
