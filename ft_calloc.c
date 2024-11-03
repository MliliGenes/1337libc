/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mlil <sel-mlil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:47:21 by sel-mlil          #+#    #+#             */
/*   Updated: 2024/11/01 20:07:02 by sel-mlil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	if (size == 0 || nmemb == 0)
	{
		pointer = malloc(0);
		return (pointer);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, nmemb * size);
	return (pointer);
}
