/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:35:39 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/24 21:46:53 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *src, const void *str, size_t num)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	if (!src && !str)
		return (src);
	ptr1 = (unsigned char*)src;
	ptr2 = (unsigned char*)str;
	while (num-- > 0)
	{
		*(ptr1) = *(ptr2);
		++ptr1;
		++ptr2;
	}
	return (src);
}
