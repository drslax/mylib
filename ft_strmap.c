/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouarg <aelouarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 16:54:02 by aelouarg          #+#    #+#             */
/*   Updated: 2018/10/19 23:39:53 by aelouarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*string;

	if (s == NULL)
		return (NULL);
	i = 0;
	if ((string = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
	{
		ft_strcpy(string, s);
		while (string[i])
		{
			string[i] = f(string[i]);
			i++;
		}
		return (string);
	}
	return (NULL);
}
