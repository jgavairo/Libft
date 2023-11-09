/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavairon <gavairon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:56:22 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/09 17:08:40 by gavairon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*strdest;
	const unsigned char	*strsrc;
	int	i;

	i = 0;
	strdest = (unsigned char*)dest;
	strsrc = (const unsigned char*)src;
	while(n > 0)
	{
		strdest[i] = strsrc[i];
		i++;
		n--;
	}
	return (strdest);
}
/*#include <stdio.h>

int main()
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";

    puts("str1 before memcpy ");
    puts(str1);

    // Copies contents of str2 to str1
    ft_memcpy(str1, str2, 2);

    puts("\nstr1 after memcpy ");
    puts(str1);

    return 0;
}*/
