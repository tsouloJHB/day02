/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 09:51:49 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/22 12:36:15 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void	ft_print_numbers(void)
{
	int num;

	num = '1';
	while (num <= '9'){
		ft_putchar(num);
		num++;
		ft_putchar('\n');
     }
}

