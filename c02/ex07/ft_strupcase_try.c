/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_try.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:50:17 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 10:25:15 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	/*
	Takes in char[]
	Converts every letter to uppercase
	Returns str
	*/
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return str;
}

int main()
{
	char str[] = "1234ABCDefgh";
	char *str_pointer = &str[0];

	ft_strupcase(str_pointer); 
	
	int	i;
	i = 0;

	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (0);
}
