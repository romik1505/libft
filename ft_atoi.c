/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:33:23 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:36:19 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long int	nb;
	int			i;
	int			sign;
	long int	pnb;

	i = 0;
	pnb = 0;
	sign = 0;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	if ((str[i] >= '0' && str[i] <= '9') || (str[i] == '+'))
		sign++;
	else if (str[i] == '-')
		sign--;
	((str[i] == '+') || (str[i] == '-')) ? (i++) : (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		pnb = nb;
		nb = nb * 10 + str[i] - '0';
		i++;
		if (pnb != nb / 10)
			return ((sign > 0) ? -1 : 0);
	}
	return (nb * sign);
}
