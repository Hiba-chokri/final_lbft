/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:23:12 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/17 12:37:45 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s || !f)
      return (NULL);
      i = 0;
      while (s[i] != '\0')
      {
        f(i, s[i]);
        i++;
      }
}