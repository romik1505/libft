/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:58:18 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:40:53 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_char(char const *str, char c)
{
	int flag;
	int count;

	flag = 0;
	count = 0;
	while (*str)
	{
		if (!flag && *str != c)
		{
			count++;
		}
		flag = (*str == c) ? 0 : 1;
		++str;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tmp;
	size_t	flag;
	size_t	index;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	if (!(tmp = (char **)ft_memalloc(sizeof(char *) * (ft_len_char(s, c) + 1))))
		return (NULL);
	flag = 0;
	i = -1;
	index = 0;
	start = 0;
	while (s[++i])
	{
		if (s[i] == c && flag)
			tmp[index++] = ft_strsub(s, start, i - start);
		if (!flag && s[i] != c)
			start = i;
		flag = (s[i] == c) ? 0 : 1;
	}
	if (flag)
		tmp[index] = ft_strsub(s, start, i - start);
	return (tmp);
}
