/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:38:23 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/24 20:45:54 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	const char	*tmp;
	size_t		i;

	if (len + 1 == 0)
		return (0);
	tmp = str;
	i = ft_strlen(to_find);
	if (i == 0)
		return ((char *)tmp);
	while (len && *tmp)
	{
		if (len >= i)
			if (!(ft_strncmp(tmp, to_find, i)))
				return ((char *)tmp);
		tmp++;
		len--;
	}
	return (0);
}
