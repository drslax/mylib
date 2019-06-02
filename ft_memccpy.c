/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouarg <aelouarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:32:42 by aelouarg          #+#    #+#             */
/*   Updated: 2018/10/21 18:24:58 by aelouarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned	char	*destination;
	unsigned	char	*source;

	i = 0;
	destination = (unsigned	char *)dst;
	source = (unsigned	char *)src;
	while (i < n)
	{
		destination[i] = source[i];
		if (source[i] == (unsigned char)c)
		{
			destination[i] = source[i];
			i++;
			return ((void*)destination + i);
		}
		i++;
	}
	return (NULL);
}
