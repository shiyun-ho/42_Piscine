#include <unistd.h>

/*
Function to write input and produce standard output (stdout)
*/
void ft_putchar(char c){
	write(1, &c, 1);
}
