/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 15:16:33 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/20 20:14:36 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	del(void *content, size_t content_size)
{
	if (!(content))
		return ;
	free(content);
	content = NULL;
	content_size = 0;
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newburg;
	t_list	*tomato;

	if (!lst)
		return (NULL);
	tomato = f(lst);
	newburg = tomato;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tomato->next = f(lst)))
		{
			ft_lstdel(&newburg, del);
			return (NULL);
		}
		tomato = tomato->next;
	}
	return (newburg);
}
