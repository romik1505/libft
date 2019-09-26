/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 22:22:44 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/26 21:32:30 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa_base(int n, int base)
{
	int		len;
	long	nb;
	char	*res;
	char	*str;

	str = "0123456789abcdef";
	len = n < 0 ? 1 : 0;
	nb = (long)n;
	len = ft_intlen_base(nb, len, base);
	len = (n == 0) ? 1 : len;
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n == 0)
		res[0] = '0';
	res[len] = '\0';
	nb = n < 0 ? -(long)n : n;
	while (nb > 0)
	{
		res[--len] = str[nb % base];
		nb /= base;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
