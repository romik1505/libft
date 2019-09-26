/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:24:38 by cniranye          #+#    #+#             */
/*   Updated: 2019/09/26 21:27:17 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_lstdelcontent(void *content, size_t content_size)
{
	free(content);
	content = 0;
	content_size = 0;
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*curr;
	t_list		*first;

	if (!lst || !f || !(first = f(lst)))
		return (NULL);
	curr = first;
	while ((lst = lst->next))
	{
		curr->next = f(lst);
		if (!(curr->next))
		{
			ft_lstdel(&first, ft_lstdelcontent);
			return (NULL);
		}
		curr = curr->next;
	}
	return (first);
}
