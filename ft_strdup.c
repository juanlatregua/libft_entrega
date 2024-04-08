/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:49:22 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/10/25 15:34:12 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src) + 1;
	dest = malloc(len);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, src, len);
	return (dest);
}
/*int main()
{
	char	str[] = "Voy a hacer un duplicado";
	char	str1[] = "Voy a ft_palm!";
	char	str2[] = "O a pythontutor!";
	
	ft_putendl_fd(ft_putdup(str), 1);
	ft_putendl_fd(ft_putdup(str1), 1);
	ft_putendl_fd(ft_putdup(str2), 1);
}*/
