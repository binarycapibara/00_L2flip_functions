/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 21:38:50 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/25 18:58:28 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_print(unsigned int div, unsigned int temp, int n, int co)
{
	int				i;

	i = 0;
	while (i <= co)
	{
		n = n / div;
		temp = temp % div;
		div = div / 10;
		ft_putchar(n + 48);
		n = temp;
		i++;
	}
}

void			ft_putnbr(int n)
{
	unsigned int	div;
	unsigned int	temp;
	int				co;
	int				sign;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}			
	temp = n;
	co = 0;
	div = 1;
	if (n < 0)
	{
		sign = -1;
		n = n * -1;
		temp = temp * -1;
		ft_putchar('-');
	}
	while (temp >= 10)
	{
		temp = temp / 10;
		div = div * 10;
		co++;
	}
	temp = n;
	ft_print(div, temp, n, co);
}
