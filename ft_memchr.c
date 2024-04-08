/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:02:10 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/10/25 15:25:16 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (size && *ptr != c)
	{
		++ptr;
		--size;
	}
	if (size)
		return ((void *)ptr);
	else
		return (NULL);
}
/*int	main()
{
	char str[] = "Cuando encuentre . sigue!";
	char c = 'e';
	ft_putstr_ft(ft_memchr(str, c, ft_strlen(str)), 1);
	ft_putchar('\n', 1);
}*/
