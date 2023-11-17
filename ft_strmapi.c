/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:37:42 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/17 12:33:05 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;
    size_t len;

    if (!s || !f)
       return (NULL);
    len = ft_strlen(s);
    str = (char *)malloc(len + 1);
    if (!str)
      return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
   
   return (str);
}
/*
char change(unsigned int i,char c)
{
  if (i % 2 == 0)
     return ( c + i);
  else
     return (c - i);
}
#include<stdio.h>
int main()
{
  char s[] = "klmn abcd";
  char *result = ft_strmapi(s,change);
  printf("%s\n",s);
  printf("%s\n",result);
}*/