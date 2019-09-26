/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:37:48 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:02:07 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t num)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && num)
	{
		dest[i] = src[j];
		i++;
		num--;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
