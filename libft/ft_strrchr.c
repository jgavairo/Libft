/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:18:29 by gavairon          #+#    #+#             */
/*   Updated: 2023/11/13 17:51:08 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	unsigned char	uc;

	uc = (unsigned char)c;
	len = ft_strlen(s);
	while (len > 0 && s[len] != uc)
		len--;
	if (s[len] == uc)
		return ((char *)s + len);
	else
		return (NULL);
}
