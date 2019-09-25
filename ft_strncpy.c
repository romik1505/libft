/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:57:37 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/24 20:44:02 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	if (n + 1 == 0)
		return (0);
	i = 0;
	while (src[i] != '\0' && dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		while (i < n)
			dest[i++] = '\0';
	return (dest);
}
