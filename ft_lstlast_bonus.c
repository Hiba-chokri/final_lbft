/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:00:37 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/17 12:01:06 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *ptr;

	if (*lst == NULL)
		return (NULL);
	ptr = lst;
	while (ptr -> next != NULL)
		ptr = ptr -> next;
	return (ptr);
}