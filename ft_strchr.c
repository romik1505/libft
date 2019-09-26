/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:36:56 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:13:43 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t i;

	i = 0;
	while (str[i] || c == 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		++i;
	}
	return (NULL);
}
