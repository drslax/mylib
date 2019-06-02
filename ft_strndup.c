/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouarg <aelouarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:24:47 by aelouarg          #+#    #+#             */
/*   Updated: 2018/10/21 04:42:32 by aelouarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char		*dest;
	size_t		lengthsrc;
	size_t		i;

	lengthsrc = ft_strlen(s1);
	if ((dest = (char *)malloc(sizeof(char) * (n + 1))))
	{
		i = 0;
		while (s1[i] != 0 && i < lengthsrc && i < n)
		{
			dest[i] = (char)s1[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
