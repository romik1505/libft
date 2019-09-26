/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:37:34 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:09:51 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t mxlen)
{
	size_t	src_len;
	size_t	dst_len;
	char	*cat_pos;
	size_t	inpt;

	src_len = ft_strlen(src);
	dst_len = ft_strnlen(dst, mxlen);
	if (dst_len != mxlen)
	{
		inpt = mxlen - dst_len - 1;
		if (inpt > src_len)
			inpt = src_len;
		cat_pos = dst + dst_len;
		ft_memcpy(cat_pos, src, inpt);
		cat_pos[inpt] = 0;
	}
	return (dst_len + src_len);
}
