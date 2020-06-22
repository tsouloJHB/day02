/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:57:01 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/22 13:21:55 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void	ft_putnbr(int nb){
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb+'0');
	} 
	else if (nb >= 10)
	{
    	ft_putchar(nb/10);
		ft_putchar(nb % 10 + '0');
		if (nb < 0)
		{
         	ft_putchar('-');
		}	
	}
	else{
    	ft_putchar('-');
		ft_putchar(nb * -1);	
	}
}




