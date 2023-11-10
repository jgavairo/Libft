/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 00:41:38 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/10 00:55:01 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lendst = 0;
	lensrc = 0;
	while (dst[lendst] && lendst < size)
		lendst++;
	while (src[lensrc])
		lensrc++;
	while (src[i] && lendst + i + 1 < size)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	if (lendst < size)
		dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
/*#include<stdio.h>
int	main(void)
{
	char	dst[50] = "iiii";

	char	src[50] = "oooooo";
	int	result;

	result = ft_strlcat(dst, src, 3);
	printf("%d", result);
	printf("\n");
	printf("%s", dst);
}*/