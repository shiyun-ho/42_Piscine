#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	int ********nbr8 = *nbr;
	int *******nbr7 = *nbr8; 
	int ******nbr6 = *nbr7; 
	int *****nbr5 = *nbr6; 
	int ****nbr4 = *nbr5; 
	int ***nbr3 = *nbr4; 
	int **nbr2 = *nbr3; 
	int *nbr = *nbr2; 

	*nbr = 42;

}

int main(void)
{
	int number = 1;

	int *********number = &number; 
	
	 
	ft_ultimate_ft(*********number); 
	printf("%i\n", number);
}
