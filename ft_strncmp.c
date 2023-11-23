/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:31:45 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/17 14:47:15 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char)s1[i] - (unsigned char)s2[i]) > 0)
			return (1);
		else if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0)
			return (-1);
		else if (s1[i] == '\0' || s2[i] == '\0')
			return ((((unsigned char)s1[i] - (unsigned char)s2[i])));
		i++;
	}
	return (0);
}
