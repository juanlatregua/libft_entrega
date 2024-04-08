/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:42:17 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/10/25 15:21:33 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;	

	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (size > 0)
	{
		*d++ = *s++;
		size--;
	}
	return (dest);
}
/*int main()
{
	char source [] = "Hello, World";
	char destination[18];

	ft_putstr_fd(ft_memcpy(destination, source, 18), 1);
	ft_putchar_fd('\n', 1);
}*/
