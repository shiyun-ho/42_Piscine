#include <stdio.h>

/*
Function which reverses an array of integer. 
First goes last (i.e. str[i] will be str[-1]...
Argument: Pointer to int, Number of int in the array
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int i; 
	i = size; 

	//Create temporary int array
	int temp_array[size];

	//Create index for temporary array
	int j;
	j = 0; 

	//while loop to insert last to first
	while (j < size)
	{
		//Empty array will start 
		temp_array[j] = tab[i-1]; 
		i--;
		j++;
	}

	//Question now is how do i reassign the values from temp_array to tab?
	int k = 0; 	
	while (k < size)
	{
		tab[k] = temp_array[k];
		k++;
	}
}

int main()
{
	int tab[] = {1,2,3};

	int *tab_pointer = &tab[0]; 

	int size; 
	size = sizeof(tab) / sizeof(tab[0]);

	
	ft_rev_int_tab(tab_pointer, size);

	return *tab;
}
	
