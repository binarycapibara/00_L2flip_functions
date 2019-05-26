/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 19:30:12 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/25 22:26:48 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_print(unsigned int n, int co, int sign, int fd)
{
	int				i;
	unsigned int	temp;
	unsigned int	div;

	i = 0;
	div = 1;
	while (i < co)
	{
		div = div * 10;
		i++;
	}
	temp = n;
	if (sign < 0)
		ft_putchar_fd('-', fd);
	i = 0;
	while (i <= co)
	{
		n = n / div;
		temp = temp % div;
		div = div / 10;
		ft_putchar_fd(n + 48, fd);
		n = temp;
		i++;
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	unsigned int	div;
	unsigned int	temp;
	int				co;
	int				sign;

	co = 0;
	div = 1;
	sign = 0;
	if (n < 0)
	{
		sign = -1;
		temp = -n;
	}
	else
		temp = n;
	while (temp / div >= 10)
	{
		div = div * 10;
		co++;
	}
	ft_print(temp, co, sign, fd);
}
