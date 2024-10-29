/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 05:23:20 by sel-mlil          #+#    #+#             */
/*   Updated: 2024/10/29 09:51:28 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_nbr(int n)
{
	int				cp;
	unsigned int	pn;

	cp = 1;
	if (n < 0)
	{
		cp++;
		pn = (unsigned int)(n * -1);
	}
	else
		pn = (unsigned int)(n);
	while (pn / 10)
	{
		pn /= 10;
		cp++;
	}
	return (cp);
}

char	*ft_itoa(int n)
{
	size_t			len;
	unsigned int	pn;
	char			*str;
	int				i;

	len = nb_nbr(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		pn = (unsigned int)(n * -1);
	else
		pn = (unsigned int)(n);
	i = len;
	str[i--] = '\0';
	if (n < 0)
		str[0] = '-';
	while (i > 0)
	{
		str[i--] = (pn % 10) + '0';
		pn /= 10;
	}
	if (str[i] != '-')
		str[i] = (pn % 10) + '0';
	return (str);
}
