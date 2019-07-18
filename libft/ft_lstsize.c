/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 19:28:20 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/20 19:51:56 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t		ft_lstsize(t_list *begin)
{
	ssize_t i;

	i = 0;
	if (!begin)
		return (-1);
	while (begin)
	{
		i++;
		begin = begin->next;
	}
	return (i);
}