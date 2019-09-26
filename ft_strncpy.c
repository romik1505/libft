/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:57:37 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/26 19:19:43 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char *d;

	d = dest;
	while (n && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n && *dest)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (d);
}
