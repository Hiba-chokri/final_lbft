/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:06:22 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/17 12:06:57 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr;

	if (lst == NULL)
		return (NULL);
	ptr = *lst;
	while (ptr -> next != NULL)
		ptr = ptr -> next;
	ptr -> next = new;
}