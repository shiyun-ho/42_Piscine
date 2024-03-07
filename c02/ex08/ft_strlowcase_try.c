/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_try.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:41:46 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 11:04:21 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	
	i = 0; 
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main()
{
	int	i;

	i = 0;
	char str[] = "123abcEWIHWEFHEODJW";
	char *str_ptr = &str[0];

	ft_strlowcase(str_ptr);
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}	
	return (0);
}
