#include <unistd.h>

void	ft_putstr(char *str)
{
	int i; 
	i = 0; 

	int string_length; 
	string_length = 0; 

	//Calculate the string length
		//loops through all memory indexes of the string until we reach end of sequence
	while (str[i] != '\0')
	{
		string_length++; 
		i++;
	}

	int j; 
	j = 0; 

	while (j < string_length)
	{
		write(1, &str[j], 1); 
		j++;
	}
}
