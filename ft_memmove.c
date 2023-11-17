/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:33:29 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/17 12:53:27 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *src_ptr;
    const unsigned char *dest_ptr;
// maybe     if (!dest && !src)
             //   return (NULL);
    src_ptr = (unsigned char *)src;
    dest_ptr = (const unsigned char *)dst;
    if (dest_ptr < src_ptr)
        ft_memcpy(dest_ptr, src_ptr, len);
    else if (dest_ptr > src_ptr)
    {
        while (len > 0)
        {
            dest_ptr[len - 1] = src_ptr[len - 1];
            len--;
        }
    }
    return (dst);
}