/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:01:52 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/08 15:09:30 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reserva memoria (con malloc(3)) y devuelve un nuevo elemento. La variable 
’content’ se inicializa mediante el valor del parámetro ’content’. La
variable ’next’ se inicializa con NULL.*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
