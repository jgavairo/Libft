/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:40:29 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/13 17:37:06 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lensrc;

	lensrc = ft_strlen(src);
	if (!size)
		return (lensrc);
	if (size <= lensrc)
	{
		while (--size)
			*dst++ = *src++;
		*dst = '\0';
		return (lensrc);
	}
	while (--size && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (lensrc);
}
