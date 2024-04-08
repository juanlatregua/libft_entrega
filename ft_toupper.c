/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:39:52 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/10/22 12:40:11 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*int	main()
{
	ft_putchar_fd(ft_toupper('a'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('u'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('A'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('5'), 1);
	ft_putchar_fd('\n', 1);
}*/
