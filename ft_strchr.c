/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:26:37 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/17 12:48:54 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	  size_t len;
    size_t i;
    
    i = 0;
    len = ft_strlen(s);
    if (!s)
       return (NULL);
    while (i <= len)
    {
        if (s[i] == c)
          return (char *)(s + i);
        i++;
    }
    return (NULL);
}
#include <stdio.h>
int main()
{
  printf("->  %s\n", ft_strchr("hello\0dfdf", '\0') + 1);
}