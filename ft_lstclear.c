/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:18:50 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/08 15:02:10 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Borra y libera la memoria del elemento pasado como parámetro y de todos los
sucesores del mismo usando la función ’del’ y free(3). Por último, el puntero
inicial debe pasar a NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!del)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
}
