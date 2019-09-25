/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putll_base_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:16:22 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/25 21:59:24 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	get_max_dec(long long nb, int base)
{
	long long dec;

	dec = 1;
	nb < 0 ? nb *= -1 : nb;
	while ((dec * base < nb) && (dec * base > 0))
		dec *= base;
	return (dec);
}

void				ft_putll_base_fd(long long nb, int fd, int base)
{
	long long		dec;
	int				cur;
	char			*alph;

	alph = "0123456789abcdef";
	dec = get_max_dec(nb, base);
	if (nb < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	while (dec > 0)
	{
		if ((cur = nb / dec) == base)
			write(fd, "10", 2);
		else
			write(fd, &(alph[cur]), 1);
		nb %= dec;
		dec /= base;
	}
}
