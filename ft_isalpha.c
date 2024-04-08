/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:53:23 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/10/22 10:27:09 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_may(int c)
{
	return (c >= 'A' && c <= 'Z');
}

static int	ft_min(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isalpha(int c)
{
	return (ft_may(c) || ft_min(c));
}

/*int	main(void)
{
	ft_putnbr_fd(ft_isalpha('a'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalpha('A'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalpha('5'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalpha('\t'), 1);
}*/
