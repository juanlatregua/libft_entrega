/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:23:37 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/08 14:57:19 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ptr es el puntero que apunta al array
// size es el tamaño del array
// de esta forma se recorre el array 
// y se le asigna el valor '\0' a cada elemento
#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
}
