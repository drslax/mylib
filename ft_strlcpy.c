/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouarg <aelouarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 23:27:18 by aelouarg          #+#    #+#             */
/*   Updated: 2018/10/20 23:27:40 by aelouarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length_src;

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	length_src = ft_strlen(src);
	if (size > 0)
	{
		size--;
		while (*src != 0 && size > i)
		{
			*dst++ = *src++;
			i++;
		}
		*dst = 0;
	}
	return (length_src);
}
