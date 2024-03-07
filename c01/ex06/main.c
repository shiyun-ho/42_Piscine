#include <stdio.h>

int	ft_strlen(char *str);

int main()
{
	char string[] = "abcdefg";
	char *str_pointer = &string[0]; 

	int counter = ft_strlen(str_pointer);
	printf("%d\n", counter); 

}

