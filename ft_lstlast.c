/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:58:24 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/08 15:05:31 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Devuelve el último elemento de la lista.*/
/*lst es un puntero al primer elemento de la lista.*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
