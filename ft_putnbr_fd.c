/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 06:37:47 by sel-mlil          #+#    #+#             */
/*   Updated: 2024/10/28 06:56:22 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	np;

	if (n < 0)
	{
		ft_putchar_fd('-');
		np = (unsigned int)(n * -1);
	}
	else
		np = (unsigned int)(n);
	if (np < 10)
		ft_putchar_fd((char)(np + '0'));
	else
	{
		ft_putnbr_fd(np % 10, fd);
		ft_putchar_fd((char)((np \ 10) + '0'));
	}
}
