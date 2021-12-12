/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:31:53 by hel-hadd          #+#    #+#             */
/*   Updated: 2021/07/06 12:31:01 by hel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_whitespace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (0);
	return (1);
}

int	ft_checker(char *base)
{
	int	checker;
	int	i;
	int	j;

	checker = base[0] && base [1];
	i = 0;
	j = 0;
	while (base[i] && checker)
	{
		j = i + 1;
		if (base[i] != '+' && base [i] != '-' && is_whitespace(base[i]))
		{
			while (base[j] && checker)
			{
				checker = base[i] != base[j];
				j++;
			}
			i++;
		}
		else
			checker = 0;
	}
	return (checker);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		cur;
	long	nb;

	len = 0;
	cur = 0;
	nb = (long)nbr;
	if (ft_checker(base))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		while (base[len])
			len++;
		if (nb >= len)
		{
			ft_putnbr_base(nb / (len), base);
		}
		cur = base[nb % len];
		write(1, &cur, 1);
	}
}
