#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int tempA = *a; 
	int tempB = *b; 

	*a = tempB; 

	*b = tempA; 
}

int main(void)
{
	int a = 1; 
	int *a_pointer = &a; 

	int b = 2; 
	int *b_pointer = &b; 

	ft_swap(a_pointer, b_pointer); 

	printf("%d", a); 
	printf("%d", b); 
}
