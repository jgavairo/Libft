/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 00:59:17 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/10 02:02:04 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	i;

	lensrc = ft_strlen(src);

	if(size <= 0)
		return(lensrc);
    if (size <= lensrc)
    {
        i = 0;
        while (i < size - 1)
        {
            *dst = *src;
            dst++;
            src++;
            i++;
        }
        *dst = '\0';
        return (lensrc);
    }
	while (size > 1 && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	*dst = '\0';
	return (lensrc);
}