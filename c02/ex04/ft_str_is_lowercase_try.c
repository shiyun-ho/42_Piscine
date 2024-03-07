/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_try.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:37:27 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 09:11:14 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;

//while it is not empty
	while (str[i] != '\0')
	{
		if ((!(str[i] >= 'a') && (str[i] <= 'z'))) //if it is within a and z
		{
			return (0);
		}
		i++; 
	}
	return (1); //if it is empty, return 1
}

int	main(void)
{
	char str[] = "abc123abc"; 
	char *str_pointer = &str[0]; 

	int result = ft_str_is_lowercase(str_pointer); 

	printf(">>> %d", result); 

	return (0);
}
