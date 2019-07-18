/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 14:52:29 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/20 22:34:08 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*pin;

	if (!(alst)|| !(*alst) || !(del))
		return ;
	while (*alst)
	{
		pin = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = pin;
	}
	*alst = NULL;
	return ;
}
