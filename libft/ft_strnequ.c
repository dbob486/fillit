/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilkim <kilkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 13:15:32 by kilkim            #+#    #+#             */
/*   Updated: 2019/08/02 23:50:30 by kilkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2 && (*s1 == *s2) && --n)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (1);
	return (0);
}
