/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:20:36 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/08 15:02:47 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Libera la memoria del elemento pasado como argumento usando la función
’del’ y después libera el elemento. La memoria del campo ’next’ no debe
ser liberada.*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}
