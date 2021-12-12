/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:22:56 by hel-hadd          #+#    #+#             */
/*   Updated: 2021/07/13 13:27:24 by hel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*p;
	int		l;
	int		i;

	l = sizeof(str);
	i = 0;
	p = NULL;
	p = malloc(l);
	if (l == 0)
		return (NULL);
	else
	{
		while (str[i] != '\0')
		{
			p[i] = str[i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
