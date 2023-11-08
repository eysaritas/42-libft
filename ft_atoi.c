/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaritas <esaritas@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:30:35 by esaritas          #+#    #+#             */
/*   Updated: 2023/10/20 17:39:27 by esaritas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			sign = sign * -1;
		}
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (sign * res);
}
