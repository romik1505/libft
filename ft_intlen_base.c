/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:24:35 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/27 00:00:54 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_intlen_base(int c, int length, int base)
{
	if (base < 0)
		return (0);
	while (c)
	{
		c /= base;
		length++;
	}
	return (length);
}
