/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaritas <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:46:55 by esaritas          #+#    #+#             */
/*   Updated: 2023/10/16 17:32:06 by esaritas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = n;
	while (s1[i] == s2[i] && s1[i] && s2[i] && size > 0)
	{
		i++;
		size--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
