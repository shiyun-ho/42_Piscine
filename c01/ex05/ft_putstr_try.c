#include <unistd.h>

void	ft_putstr(char *str)
{
	int str_length; 
	str_length = 0; 
	
	int i;
	i = 0; 

	while (str[i] != '\0')
	{
		str_length++;
		i++;
	}

	int j; 
	j = 0;

	while (j < str_length)
	{
		write(1, &str[j], 1); 
		j++; 
	}
}

int main(void)
{
	char string[]= "Hello World! I love 42!"; 
	char *str_pointer = &string[0]; 

	ft_putstr(str_pointer); 

	return (0); 
}
