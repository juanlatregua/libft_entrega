/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:16:44 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/11/08 15:42:10 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	ssize_t	i;

	i = (ssize_t)ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&(((char *)str)[i]));
		--i;
	}
	return (0);
}
