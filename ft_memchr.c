/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:35:18 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/26 23:59:56 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*local;

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
