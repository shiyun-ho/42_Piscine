#include <unistd.h>
#include <stdio.h>


int ft_strlen(char *str);

int main(void)
{
	char str[] = "Hello";
	char str2[] = "";
	char str3[] = "!@#$%^&*()";

	char *str_ptr = &str[0];
	int i = 0;
	//while (str[i] != '\0')
	//{
	//	write(1, &str[i], 1);
	//	i++;
	//}
//	int result = ft_strlen(str_ptr);

	printf("%s: >>>%d\n", str,  ft_strlen(&str[0]));  
	printf("%s: >>>%d\n", str2,  ft_strlen(&str2[0]));  
	printf("%s: >>>%d\n", str3,  ft_strlen(&str3[0]));  
}
