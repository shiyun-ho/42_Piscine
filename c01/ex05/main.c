#include <unistd.h>

void	ft_putstr(char *str);

int main(void)
{
	char string[] = "Hello World! I love 42 and dolphins!"; 
	char *str_pointer = &string[0]; 

	ft_putstr(str_pointer); 

	return (0); 
}

