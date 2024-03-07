int	ft_strlen(char *str)
{
	int i; 
	i = 0; 

	int counter; 
	counter = 0; 

	while (str[i] != '\0')
	{
		counter++;
		i++; 
	}

	return counter;
}
