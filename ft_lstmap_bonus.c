/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <hichokri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:05:09 by hichokri          #+#    #+#             */
/*   Updated: 2023/11/23 17:42:59 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;
	void	*cont;

	new = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			cont = f(lst->content);
			node = ft_lstnew(cont);
			if (node)
			{
				ft_lstadd_back(&new, node);
				lst = lst->next;
			}
			else
			{
				ft_lstclear(&new, del);
				free(cont);
				return (NULL);
			}
		}
	}
	return (new);
}
// #include<stdio.h>
// void *add(void *c)
// {
//     return ((void *)ft_strdup("swsw"));
// }
// int main()
// {
//    t_list *h = NULL;
//     ft_lstadd_back(&h, ft_lstnew(ft_strdup("mehdi")));
//     ft_lstadd_back(&h, ft_lstnew(ft_strdup("heba")));
//     ft_lstadd_back(&h, ft_lstnew(ft_strdup("lwlad")));
//    t_list *c = ft_lstmap(h,add,free);
//     while (c)
//     {
//         printf("%s ",c->content);
//         c=c->next;
//     }
// }