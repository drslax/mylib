/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouarg <aelouarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:01:04 by aelouarg          #+#    #+#             */
/*   Updated: 2018/10/21 20:42:09 by aelouarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*temp;
	char		*destination;
	const char	*source;

	destination = (char *)dst;
	source = (const char *)src;
	temp = (char *)malloc(sizeof(char) * len);
	ft_memcpy(temp, source, len);
	ft_memcpy(destination, temp, len);
	free(temp);
	return (dst);
}
