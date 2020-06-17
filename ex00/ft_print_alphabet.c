#include <unistd.h>


int ft_putchar(char c){

	write(1,&c,1);
	return (0);
}

void ft_print_alphabet(void){

   char alpha = 'a';
   while( alpha <= 'z'){
	   ft_putchar(alpha);
	   alpha++;
   }


}

int main(){

  ft_print_alphabet();
  return (0);

}
		
