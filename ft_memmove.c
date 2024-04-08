/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:24:05 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/08 15:13:14 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// The memmove() function copies n bytes from memory area src to memory area 
//dest. The memory areas may overlap: copying takes place as though the bytes 
//in src are first copied into a temporary array 
//that does not overlap src or dest, 
//and the bytes are then copied from the temporary array to dest.

void	*ft_memmove(void	*dst, const	void	*src, size_t n)
{
	char			*src2;
	char			*dst2;

	src2 = (char *)src;
	dst2 = (char *)dst;
	if (!dst2 && !src2)
		return (0);
	if (src2 < dst2)
	{
		while (n--)
			dst2[n] = src2[n];
	}
	else
		ft_memcpy(dst2, src2, n);
	return (dst2);
}
