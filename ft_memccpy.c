/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:35:06 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/26 21:37:38 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *src, const void *str, int c, size_t num)
{
	size_t			i;
	unsigned char	*ptr_src;
	unsigned char	*ptr_str;

	if (num + 1 == 0)
		return (0);
	ptr_src = (unsigned char*)src;
	ptr_str = (unsigned char*)str;
	i = 0;
	while (i < num)
	{
		ptr_src[i] = ptr_str[i];
		if (ptr_src[i] == (unsigned char)c)
			return ((void *)(src + i + 1));
		++i;
	}
	return (NULL);
}
