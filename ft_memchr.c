/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 02:10:28 by sel-mlil          #+#    #+#             */
/*   Updated: 2024/10/23 02:11:40 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			_c;
	const unsigned char		*_s;
	size_t					i;

	i = 0;
	_c = (unsigned char)c;
	_s = (const unsigned char *)s;
	while (i < n)
	{
		if (_s[i] == _c)
			return ((void *)_s + i);
		i++;
	}
	return (NULL);
}
