/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 02:35:23 by sel-mlil          #+#    #+#             */
/*   Updated: 2024/11/01 13:56:58 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		ii;

	if (!big && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (i > len - ft_strlen(little))
			break ;
		ii = 0;
		while (big[i + ii] == little[ii] && little[ii] && i + ii < len)
			ii++;
		if (!little[ii])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
