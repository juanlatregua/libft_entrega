/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:11:58 by jsilva-m          #+#    #+#             */
/*   Updated: 2023/10/22 10:34:25 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*int main()
{
	ft_putnbr_fd(ft_isprint('5'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isprint('4'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isprint('a'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isprint('\t'), 1);
	ft_putchar_fd('\n', 1);
}*/
