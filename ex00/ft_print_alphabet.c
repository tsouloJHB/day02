/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 13:12:33 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/22 15:18:53 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	     char alpha;	
	     alpha  = 'a';

         while	(alpha >= 'z')
	     {
	 		 ft_putchar(alpha);
	 		 alpha++;
         }
	     ft_putchar('\n');
}


		
