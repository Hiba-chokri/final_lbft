/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:38:16 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/16 17:41:52 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest_ptr;
    const unsigned char *src_ptr;
    
    if (!dest && !src)
      return (NULL);
    dest_ptr = (char *)dest;
    src_ptr = (const char *)src;
    i = 0;
    if (dest == src)
      return (dest);
    while (i < n)
    {
        dest_ptr[i] = src_ptr[i];
        i++;
    }
    return (dest);
}
  