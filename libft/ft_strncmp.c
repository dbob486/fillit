/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <kilkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 13:15:20 by kilkim            #+#    #+#             */
/*   Updated: 2019/08/01 13:15:20 by kilkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*e1;
	unsigned char	*e2;

	e1 = (unsigned char*)s1;
	e2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (*e1 == *e2 && *e1 && *e2 && --n)
	{
		e1++;
		e2++;
	}
	return (*e1 - *e2);
}
