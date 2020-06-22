/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 13:12:33 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/22 12:34:12 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	     char alpha;	
	     alpha  = 'z';

         while	(alpha >= 'a')
	     {
	 		 ft_putchar(alpha);
	 		 alpha--;
         }
	     ft_putchar('\n');
}


		
