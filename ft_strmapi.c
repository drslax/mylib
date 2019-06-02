/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouarg <aelouarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 17:12:22 by aelouarg          #+#    #+#             */
/*   Updated: 2018/10/19 23:40:08 by aelouarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*string;

	if (s == NULL)
		return (NULL);
	i = 0;
	if ((string = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
	{
		ft_strcpy(string, s);
		while (string[i] != '\0')
		{
			string[i] = f(i, string[i]);
			i++;
		}
		return (string);
	}
	return (NULL);
}
