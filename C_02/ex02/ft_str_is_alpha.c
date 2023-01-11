/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:23:27 by isbarka           #+#    #+#             */
/*   Updated: 2022/07/25 22:20:49 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i ;

	i = 0 ;
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z'))
			{
				i++;
			}
			else
			{
				return (0);
			}
		}
	}
	return (1);
}