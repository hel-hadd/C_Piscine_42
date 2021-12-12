/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:42:22 by hel-hadd          #+#    #+#             */
/*   Updated: 2021/07/15 14:42:27 by hel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
typedef int	t_bool;
# define TRUE 1 
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.\n"  
# define ODD_MSG "I have an odd number of arguments.\n" 
# define SUCCESS 0 
# define EVEN(nbr) (nbr % 2 == 0)
#endif
