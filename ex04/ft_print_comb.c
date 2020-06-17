/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 16:02:09 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/17 17:18:46 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int ft_putchar(char c){
 write(1,&c,1);
 return (0);
}


void ft_print_comb(){

 int i = '0';
 int j = '0';
 int k = '0';
 int l = '0';
    while ( i <= '9') {
        ft_putchar(i);
		while(j <= '9'){
			ft_putchar(j);
			j++;
		}
    i++;	
	j = i+1;
  }
}

int main(){
   ft_print_comb(); 
	return(0);

