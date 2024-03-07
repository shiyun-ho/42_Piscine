/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_try.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 23:53:59 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 07:44:00 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	/*
	Returns 1 if string contains ONLY alphabetical
	Returns 0 if it contains any other character
	Return 1 if str is empty
	*/

	int	i;
	i = 0;

	if (str[0] != '\0')
	{
		//else if str not empty
		//check if it contains ONLY alphabet
		//else return 0 --> refactor code after this
		while (str[i] != '\0')
		{
			if((str[i] >= 'A') && (str[i] <= 'z')) //checks if string is within alphabets
			{
				return (1);
			}
			i++;
		}
	}

	return (0);
}

int	main()
{
	char str[] = "12345"; 
	char *str_ptr = &str[0]; 

	int result = ft_str_is_alpha(str_ptr);

	printf(">>>%d ", result);

	return (0); 
}
