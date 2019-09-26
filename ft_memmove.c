/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:35:52 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:04:17 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*pdst;
	const char		*psrc;
	size_t			i;

	psrc = src;
	pdst = dst;
	i = 0;
	if (pdst > psrc)
	{
		while (len > 0)
		{
			--len;
			pdst[len] = psrc[len];
		}
	}
	else if (pdst < psrc)
	{
		while (i < len)
		{
			pdst[i] = psrc[i];
			++i;
		}
	}
	return (dst);
}
