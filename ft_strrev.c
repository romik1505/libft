/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 11:32:02 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:20:13 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t		i;
	size_t		len;
	char		buff;

	len = ft_strlen(str);
	len = len == 0 ? len : --len;
	i = 0;
	while (i < len)
	{
		buff = str[i];
		str[i] = str[len];
		str[len] = buff;
		i++;
		--len;
	}
	return (str);
}
