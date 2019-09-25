/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:24:02 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/24 14:43:31 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*cur;

	if (!alst || !(*alst) || !del)
		return ;
	cur = *alst;
	while (cur)
	{
		tmp = cur->next;
		ft_lstdelone(&cur, del);
		cur = tmp;
	}
	*alst = NULL;
}
