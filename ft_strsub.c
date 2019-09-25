/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:58:48 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/24 20:48:49 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (!s || (len + 1 == 0))
		return (0);
	if (!(tmp = ft_strnew(len)))
		return (NULL);
	ft_memcpy(tmp, s + start, len);
	tmp[len] = 0;
	return (tmp);
}
