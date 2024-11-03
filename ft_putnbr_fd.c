/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 06:37:47 by sel-mlil          #+#    #+#             */
/*   Updated: 2024/11/01 13:39:06 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	np;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		np = (unsigned int)(n * -1);
	}
	else
		np = (unsigned int)(n);
	if (np <= 9)
		ft_putchar_fd(np + '0', fd);
	else
	{
		ft_putnbr_fd((np / 10), fd);
		ft_putchar_fd((np % 10) + '0', fd);
	}
}
