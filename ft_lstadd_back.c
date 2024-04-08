/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:14:29 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/08 14:58:20 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Añade el elemento ’new’ al final de la lista.*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
