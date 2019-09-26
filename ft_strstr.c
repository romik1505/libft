/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:38:54 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:20:47 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	i;
	size_t	j;
	size_t	lenght;

	i = 0;
	if (!*to_find)
		return ((char *)(str));
	lenght = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j] != '\0')
			j++;
		if (j == lenght)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
