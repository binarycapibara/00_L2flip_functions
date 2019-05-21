/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenae <fjenae@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 19:30:12 by fjenae            #+#    #+#             */
/*   Updated: 2019/05/21 22:57:13 by fjenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_print(unsigned int div, unsigned int temp, int n, int counter, int fd)
{
	int		i;

	i = 0;
	while (i <= counter)
		{
			n = n / div;
			temp = temp % div;
		    div = div / 10;
		    ft_putchar_fd(n + 48, fd);
		    n = temp;
		    i++;
	     }
}

void	ft_putnbr_fd(int	n, int	fd)
{
	unsigned int	div;
	unsigned int	temp;
	int				counter;
	int 			sign;

	temp = n;
	counter = 0;
	div = 1;
	if (n < 0)
	{
		sign = -1;
		n = n * -1;
		temp = temp * -1;
		write (fd, "-", 1);
	}
	while (temp > 10)
	{
		temp = temp / 10;
		div = div * 10;
		counter++;
	}
	temp = n;
	ft_print(div, temp, n, counter, fd);
}

