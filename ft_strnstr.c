/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:49:31 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/17 11:16:00 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	
	if (s2[0] == '\0')
	    return ((char *)s1);
	
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		
		while (s1[i + j] == s2[j] && s2[j] != '\0')
		{
			if (s2[j + 1] == '\0' && i + j < n)
				return ((char *)(&s1[i]));
			j++;
		}
		i++;
	}
	return (0);
}
int main()
{
	char s1[] = "whh uwhbsf ewgww";
	char s2[] ;
	char *found = ft_strnstr(s1,s2,	30);
	printf("%s",found);
}