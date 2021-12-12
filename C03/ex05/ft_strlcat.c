/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 13:25:17 by hel-hadd          #+#    #+#             */
/*   Updated: 2021/07/04 15:51:39 by hel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ldest;
	unsigned int	lsrc;

	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	i = 0;
	if (size <= ldest)
		return (lsrc + size);
	while (i < size - ldest - 1 && src[i])
	{
		dest[ldest + i] = src[i];
		i++;
	}
	dest[ldest + i] = 0;
	return (ldest + lsrc);
}
