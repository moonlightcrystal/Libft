/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:49:58 by kcorie            #+#    #+#             */
/*   Updated: 2019/04/12 22:13:30 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;
	const char	*fd;

	fd = NULL;
	p = NULL;
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	while ((p = ft_strchr(s, c)))
	{
		fd = p;
		s = p + 1;
	}
	return ((char *)fd);
}
