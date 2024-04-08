/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:43:29 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/08 15:00:03 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*añade el elemento ’new’ al principio de la lista.*/
/*'new' es un puntero al elemento que hay que añadir a la lista.*/
/*'lst' es un puntero al primer elemento de la lista.*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
/*int main()
{
    t_list *lst;
    t_list *new;

    lst = ft_lstnew("hola");
    new = ft_lstnew("adios");
    ft_lstadd_front(&lst, new);
    printf("%s\n", lst->content);
    printf("%s\n", lst->next->content);
}*/
