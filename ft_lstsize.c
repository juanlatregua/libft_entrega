/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:05:07 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/08 15:11:11 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cuenta el número de elementos de la lista.*/
/*lst->next es el siguiente elemento de la lista
lst es un puntero al primer elemento de la lista.*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
