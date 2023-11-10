/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:31:25 by jgavairo          #+#    #+#             */
/*   Updated: 2023/11/09 23:55:11 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    if (little[j] == '\0')
        return ((char *)big);
    while (big[i] && i < len)
    {
        while (big[i] == little[j] && i < len)
        {
            j++;
            i++;
            if(little[j] == '\0')
            {
                return (char *)big + (i - j);
            }
        }
        i = i - j;
        j = 0;
        i++;
    }
    return (NULL);
}