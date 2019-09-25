/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:58:54 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/24 16:11:49 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(int c)
{
	return (c == '\t' || c == '\n' || c == ' ');
}

char		*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;

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
