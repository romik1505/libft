/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 14:22:47 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/24 20:56:53 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	if (s)
		i = ft_strlen(s);
	if (maxlen + 1 == 0)
		return (i);
	i > maxlen ? (i = maxlen) : i;
	return (i);
}
