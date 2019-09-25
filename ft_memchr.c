/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:35:18 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/24 20:42:29 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*local;

	if (n + 1 == 0)
		return (0);
	ch = (unsigned char)c;
	local = (unsigned char *)s;
	while (n--)
	{
		if (*local == ch)
			return ((void *)local);
		local++;
	}
	return (NULL);
}
