/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:49:48 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/16 15:10:20 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *s1;
    
    i = 0;
    s1 = (unsigned char *)s;
    while (i < n)
    {
        s1[i] =(unsigned char)c;
        i++;
    }
    return (s1);
}