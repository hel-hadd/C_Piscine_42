/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadd <hel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:25:09 by hel-hadd          #+#    #+#             */
/*   Updated: 2021/12/12 10:46:32 by hel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	i += len(dest);
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	max_len(int size, char **strs, char *sep)
{
	int	ml;
	int	i;

	ml = 0;
	i = 0;
	while (i < size)
		ml += len(strs[i++]);
	if (size > 0)
		ml += len(sep) * (size - 1);
	return (ml);
}

char	*ft_strjoin(int	size, char **strs, char *sep)
{
	int		i;
	char	*out;
	int		ml;

	i = 0;
	ml = 0;
	ml = max_len(size, &strs[i], sep);
	out = malloc(sizeof(char) * (ml + 1));
	if (!out)
		return (NULL);
	while (i < size)
	{
		if (i != 0)
			out = ft_strcat(out, sep);
		out = ft_strcat(out, strs[i]);
		i++;
	}
	return (out);
}