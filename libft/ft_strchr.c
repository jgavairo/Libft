/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:48:48 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/09 20:52:56 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{	
	if(c < 0 || c > 127)
		return ((char *)s);
	while (*s)
	{
		if(*s == c)
			return((char *)s);
		s++;
	}
	if(c == '\0')
		return((char *)s);
	return (NULL);
}
