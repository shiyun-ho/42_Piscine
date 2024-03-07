#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i; 
	i = 0; 

	int counter; 
	counter = 0; 

	//Count number of characters in a string
	while (str[i] != '\0')
	{
		counter++;
		i++; 
	}

	return counter;
}

int main()
{
	char string[] = "abcdefg";
	char *str_pointer = &string[0]; 

	int counter = ft_strlen(str_pointer);
	printf("%d\n", counter); 

}

