/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 04:40:49 by sel-mlil          #+#    #+#             */
/*   Updated: 2024/10/30 04:40:50 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	nb_nbr(long int n)
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

static char	*filling(char *str, long int nb, int len)
{
	str[len] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			len;
	char		*str;

	nb = (long)n;
	len = nb_nbr(nb);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	return (filling(str, nb, len));
}
