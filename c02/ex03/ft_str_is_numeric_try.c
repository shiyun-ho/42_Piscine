/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_try.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:06:21 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 08:15:34 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	/*
	If string contains 0-9 -> return 1
	Else -> 0
	*/
	
	int	i;
	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			return (1); 
		i++;
	}

	return (0);
}

int	main(void)
{
	char str[] = "abc123jd";
	char *str_pointer = &str[0];

	int result = ft_str_is_numeric(str_pointer);

	printf(">>> %d ", result);

	return (0);
}

