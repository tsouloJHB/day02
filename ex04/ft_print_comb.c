/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 16:02:09 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/22 12:39:16 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int li;
	int ls;
	int k;

	li = '0';
	ls = '0';
	k = '0';
    while (li <= '9')
   	{
    	ls = li +1;
		while (ls <= '9')
		{
			k = ls+1;
			while (k <= '9')
			{
				if (k != li && k != ls)
				{
                   ft_putchar(li);
				   ft_putchar(ls);
				   ft_putchar(k);
				   ft_putchar(',');
				}
				k++;
			}
			ls++;
			k= '0';
		}
     li++;
     ls = '0';
  }
}

