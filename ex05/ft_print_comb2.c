/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:40:42 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/22 13:17:00 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_comb2(void){
	int li;
	int ls;

 	li = -1;
 	while (li < 99)
	{
		ls = ++li +1;	  
		while (ls <  100)
		{
    		ft_putchar((li / 10) + '0');
			ft_putchar((li % 10) + '0');
			ft_putchar(' ');
			ft_putchar((ls / 10) + '0');
			ft_putchar((ls++ % 10) +'0');
		    if (li != 98){
	  			//write(1,",",1);
				ft_putchar(','); 
   			}
  		}
	}
}

