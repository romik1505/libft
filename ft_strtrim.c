/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:58:54 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:12:11 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(int c)
{
	return (c == '\t' || c == '\n' || c == ' ');
}

char		*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (s)
	{
		end = ft_strlen(s);
		(end > 0 ? --end : (0));
		while (ft_iswhitespace(s[start]) && start <= end)
			++start;
		while (ft_iswhitespace(s[end]) && start <= end)
			--end;
		return (ft_strsub(s, start, end - start + 1));
	}
	return (0);
}
