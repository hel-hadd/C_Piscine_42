/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 18:10:36 by hel-hadd          #+#    #+#             */
/*   Updated: 2021/06/24 18:52:33 by hel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printl3ibat(int a, int b, int c, int d)
{
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	ft_putchar(' ');
	ft_putchar('0' + c);
	ft_putchar('0' + d);
	if (!(a == 9 && b == 8 && c == 9 && d == 9))
	{
		write (1, ", ", 2);
	}
}

void	print2(int a, int b)
{
	int	c;
	int	d;

	c = a;
	d = b + 1;
	while (c <= 9)
	{
		while (d <= 9)
		{
			printl3ibat(a, b, c, d);
			d++;
		}
		c++;
		d = 0;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			print2(a, b);
			b++;
		}
		a++;
	}
}
