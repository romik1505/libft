/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:37:17 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:09:09 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ret;
	char	*buff;

	if (!(buff = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	ret = buff;
	while (*src)
	{
		*buff = *src;
		++buff;
		++src;
	}
	*buff = '\0';
	return (ret);
}
