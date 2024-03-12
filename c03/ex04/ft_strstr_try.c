/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_try.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:31:32 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/10 10:04:03 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	int	str_sum;
	int substr_sum;

	while (str[i] != '\0')
		str_sum += str[i];
	while (to_find[j] != '\0')
		substr_sum += to_find[j];
	i = 0;
	j = 0;
	if (str_sum >= substr_sum)
	{
		while (str[i] != '\0') 
		{//Execute traditional char by char comparison
			//while first letter of str matches sub
			while (str[i] == to_find[j] && j < substr_sum)
			{ //move to next substr element in array
				j++;
			}
			i++;
			if (j == substr_sum)
			{
				str[i] = '\0';
			}
		}
	}

	return 0;
}
