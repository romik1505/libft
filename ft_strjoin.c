/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:57:12 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/24 20:49:42 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *tmp;

	if (!s1 || !s2)
		return (NULL);
	if ((!(tmp = ft_strnew(sizeof(char) * (ft_strlen((char *)s1) +
		ft_strlen((char *)s2))))))
		return (NULL);
	tmp = ft_strcpy(tmp, s1);
	if (!(tmp = ft_strcat(tmp, (char *)s2)))
		return (NULL);
	return (tmp);
}
