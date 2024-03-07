#include <unistd.h>
/*
Function takes a parameter. 
This parameter is a pointer.
The pointer should point to int. (i.e. show address to the int variable) 
The function should set the integer to a value of '42'
*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int	integer;
	integer = 1;

	int *ptr = &integer;
	
	ft_ft(ptr);
	write(1,&integer,1);

	return (0);
	
}
