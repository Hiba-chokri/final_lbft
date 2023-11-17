/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:12:02 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/16 18:43:26 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t len;
    
    len = ft_strlen(s) - 1;
    if (!s)
       return (NULL);
    while (len >= 0)
    {   
        if (s[len] == (char)c)
          return (char *)(s + len);
        len--;
    }
    return (NULL);
}