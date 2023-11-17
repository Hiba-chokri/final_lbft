/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:50:37 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/06 14:36:13 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while ( i < n)
    {
        if (*(unsigned char *)(s + i) == c)
            return ((void *)(s + i));
        i++;
    }
    return (NULL);
}

int main()
{
    char s1[] = "nJTEBSB HGeuVHRG HGRQ";
    char c = 'H';
    void *res = ft_memchr(s1,c,20);
    printf("%ld" , (char *)res - s1);
}