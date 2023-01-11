/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:31:26 by isbarka           #+#    #+#             */
/*   Updated: 2022/08/06 10:07:29 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		j = 0 ;
		while (av[i][j] != '\0')
		{
			write (1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
