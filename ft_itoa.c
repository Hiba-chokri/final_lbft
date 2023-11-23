/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:03:00 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/23 18:04:53 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = (-n);
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*str;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	nbr = n;
	len = ft_length(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		str[0] = '-';
	}
	while (nbr != 0)
	{
		str[len--] = '0' + (nbr % 10);
		nbr = nbr / 10;
	}
	return (str);
}
