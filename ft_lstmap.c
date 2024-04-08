/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:08:22 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/08 15:07:21 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Itera sobre la lista ’lst’ y aplica la función ’f’ al contenido de cada
elemento. Crea una nueva lista que resulta de las aplicaciones sucesivas de
’f’. La función ’del’ se usa para borrar el contenido de un elemento si
es necesario (por ejemplo, con ft_memdel).*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*first_node;

	if (!lst)
		return (0);
	first_node = (t_list *)malloc(sizeof(t_list));
	if (!first_node)
		return (0);
	first_node->content = f(lst -> content);
	node = first_node;
	while (lst->next)
	{
		lst = lst -> next;
		node -> next = (t_list *)malloc(sizeof(t_list));
		if (!node->next)
		{
			ft_lstclear(&first_node, del);
			return (0);
		}
		node = node -> next;
		node -> content = f(lst -> content);
	}
	node -> next = 0;
	return (first_node);
}
