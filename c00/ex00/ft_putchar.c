#include <unistd.h>

/*
Function to write input and produce standard output (stdout)
*/
void ft_putchar(char c){
	write(1, &c, 1);
}

/*
Main function to run ft_putchar with input defined 
*/
int main(void){
	char input = 'c';
	ft_putchar(input);

	return (0); 
}
