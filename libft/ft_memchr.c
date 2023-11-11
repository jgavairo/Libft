/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavairon <gavairon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:51:42 by gavairon          #+#    #+#             */
/*   Updated: 2023/11/11 20:05:30 by gavairon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	t;

	str = (unsigned char *)s;
	t = (unsigned char)c;

	while (n > 1)
	{
		if (*str == c)
			return (*str);
		str++;
		n--;
	}
	if (n == 0)
		return (NULL);
}