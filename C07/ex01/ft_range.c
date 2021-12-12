/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:23:22 by hel-hadd          #+#    #+#             */
/*   Updated: 2021/07/13 13:33:30 by hel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int	min, int max)
{
	int	*t;
	int	i;

	t = NULL;
	i = 0;
	if (min >= max)
		return (NULL);
	else if (min < max)
	{
		t = malloc (sizeof(int) * (max - min));
		while (min < max)
		{
			t[i] = min;
			i++;
			min++;
		}
	}
	return (t);
}
