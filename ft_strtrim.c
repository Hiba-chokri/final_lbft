/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:00:29 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/15 13:59:27 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t len;
    size_t i;
    char *str;

    if (!s1 || !set)
     return (NULL);
    i = -1;
    start = 0;
    end = ft_strlen(s1) - 1;
    while(start < end && ft_strchr(set,s1[start]))
        start++;
    while (end > start && ft_strchr(set,s1[end]))
         end--;
    len = end - start;
    str = (char *)malloc(len + 1);
    if (!str)
      return (NULL);
    while (start < end)
    {
        str[++i] = *(char *)(s1 + start);
        start++;
    }
    str[i] = '\0';
    return (str);
}
/*
int main()
{
    char s1[] = "*";
    char s2[] = "*";
    char *s = ft_strtrim(s1,s2);
    printf("%s",s);
}
*/
