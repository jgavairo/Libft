/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavairon <gavairon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:18:29 by gavairon          #+#    #+#             */
/*   Updated: 2023/11/09 18:01:55 by gavairon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t  len;
    
    len = ft_strlen(s);

    if(c < 0 || c > 127)
        return(NULL);
    while(len > 0 && s[len] != c)
        len--;
    if (s[len] == c)
        return ((char *)s + len);
    else
        return (NULL);
}