/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:56:06 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/17 11:56:41 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_node;
	new_node = NULL;
	new_node = (t_list *)malloc(sizeof(t_list);
	if (!new_node)
	   return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}