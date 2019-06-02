/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouarg <aelouarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 14:28:49 by aelouarg          #+#    #+#             */
/*   Updated: 2018/10/20 22:46:52 by aelouarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(const char *str, char c)
{
	int		i;
	int		count;
	int		new_word;

	new_word = 1;
	count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != c) && new_word == 1)
		{
			count++;
			new_word = 0;
		}
		else if (str[i] == c)
			new_word = 1;
		i++;
	}
	return (count);
}
