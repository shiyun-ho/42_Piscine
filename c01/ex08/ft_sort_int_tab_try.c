#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i; 
	i = 0;
	int	j; 
	j = 0;
	int	temp; 

	while (j < size - i)
		{
			while (i < size - 1)
				{
					if (tab[i] > tab[i+1])
						{
							temp = tab[i];
							tab[i] = tab[i+1];
							tab[i+1] = temp;  
						}
					i++;
				}
			j++; 
			i = 0; 
		}
}

int	main(void)
{
	int tab[] = {15, 7, 22, 18, 1};
	int *tab_pointer = &tab[0]; 

	//calculate size
	int size = sizeof(tab) / sizeof(tab[0]); 

	ft_sort_int_tab(tab_pointer, size); 

	for (int i = 0; i < size; i++)
	{
		printf("%d, ", tab[i]);
	}
}
