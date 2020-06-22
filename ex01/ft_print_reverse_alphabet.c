/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:03:02 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/22 12:35:12 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char alpha;

	alpha  = 'z';
	while (alpha  >= 'a')
	{
		ft_putchar(alpha);
		alpha--;
	}
	ft_putchar('\n');
}
