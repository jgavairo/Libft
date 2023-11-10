/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:56:22 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/09 21:29:13 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*strdest;
	const unsigned char	*strsrc;
	int		lendest;
	int		lensrc;

	strdest = (char *)dest;
	strsrc = (char *)strsrc;
	lensrc = ft_strlen(strsrc);

	while(lensrc > 0)
	{
		strdest[n + lensrc] = strsrc[lensrc];
		lensrc--;
	}
	return ((char *)strdest);
}