/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:54:24 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:15:02 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	size;
	size_t	i;
	char	*map;

	map = 0;
	if (s)
	{
		size = ft_strlen(s);
		map = (char *)malloc(sizeof(char) * (size + 1));
		if (f && map)
		{
			i = 0;
			while (i < size)
			{
				map[i] = (*f)(s[i]);
				i++;
			}
			map[i] = 0;
		}
	}
	return (map);
}
