/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 11:32:02 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/26 12:45:55 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrev(char *str)
{
	int i;
	int len;
	char buff;

	len = ft_strlen(str);
	len -= 1;
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
