/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:38:45 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/24 14:30:10 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	if (c == '\0')
		return ((char *)(str + i));
	while (--i >= 0)
	{
		if (str[i] == c)
			return ((char *)(str + i));
	}
	return (NULL);
}
