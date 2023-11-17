/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:58:58 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/17 11:59:29 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int count;
	t_list *ptr;

	if (*lst == NULL)
		return (NULL);
	count = 0;
	ptr = *lst;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr -> next;
	}
	return (count);
}