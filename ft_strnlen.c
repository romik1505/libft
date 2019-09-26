/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 14:22:47 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:03:44 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	if (s)
		i = ft_strlen(s);
	i > maxlen ? (i = maxlen) : i;
	return (i);
}
