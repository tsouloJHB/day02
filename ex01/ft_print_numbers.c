/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:25:54 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/17 14:26:05 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include <unistd.h>

int ft_putchar(char c){

 write(1,&c,1);
 return (0);
}

void ft_print_numbers(void){

  int num = '1';
  char ls;
  while(num <= '9'){
	  ft_putchar(num);
	  num++;
  }
}

int main(){

ft_print_numbers();
ft_putchar('\n');
return(0);

}
