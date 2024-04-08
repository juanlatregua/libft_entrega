/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:07:33 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/10/22 10:14:04 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int main()
{
	ft_putnbr_fd(ft_isalnum('1'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('A'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('F'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('1'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('5'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('x'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('\n'), 1);
	ft_putchar_fd('\n', 1);
}*/
