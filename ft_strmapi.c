/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:57:28 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:15:14 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	if (!f || !s)
		return (NULL);
	if (!(tmp = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		tmp[i] = (*f)(i, s[i]);
		++i;
	}
	return (tmp);
}
