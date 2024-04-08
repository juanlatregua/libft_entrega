/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:02:05 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/10/25 15:27:00 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t size)
{
	char	*aux;
	size_t	i;

	i = 0;
	aux = (char *)b;
	while (i < size)
	{
		aux[i] = c;
		i++;
	}
	return (b);
}
/*int main()
{
	char	str[] = "hola";
	char	c = 'u'
	ft_putstr_fd(ft_memset(str, c, 4), 1);
	ft_putchar_fd('\n', 1);
}*/
