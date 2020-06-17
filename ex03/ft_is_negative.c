/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:39:58 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/17 15:36:09 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int ft_putchar(char c){
    write(1,&c,1);
	return (0);
}
void ft_is_negative(int n){

 if(n < 0){
  ft_putchar('N');
 }else if(n >=0){
  ft_putchar('P');
  }
 ft_putchar('\n');
}

int main(){

  return(0); 
}
