/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:08:23 by isbarka           #+#    #+#             */
/*   Updated: 2022/07/21 15:46:15 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write (1, "-", 1);
		}
	}
	if (nb / 10 != 0)
		ft_putnbr (nb / 10);
	c = '0' + (nb % 10);
	write(1, &c, 1);
}