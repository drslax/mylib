/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouarg <aelouarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 23:10:35 by aelouarg          #+#    #+#             */
/*   Updated: 2018/10/17 14:03:36 by aelouarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*string;

	string = (char *)s;
	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == c)
			return (string + i);
		i++;
	}
	if (string[i] == c)
		return (string + i);
	return (NULL);
}
