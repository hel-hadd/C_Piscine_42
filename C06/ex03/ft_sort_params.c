/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:31:34 by hel-hadd          #+#    #+#             */
/*   Updated: 2021/07/10 15:44:29 by hel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (*str);
}

char	sort_str(char **argv)
{	
	int		i;
	int		j;
	char	*swp;

	i = 1;
	j = 2;
	while (argv[i])
	{
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				swp = argv[i];
				argv[i] = argv[j];
				argv[j] = swp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (**argv);
}

int	main(int argc, char **argv)
{
	int	index;

	(void) argc;
	index = 1;
	sort_str(argv);
	while (argv[index])
	{	
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
}
