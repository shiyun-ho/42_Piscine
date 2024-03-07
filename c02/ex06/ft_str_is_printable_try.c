/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_try.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:41:55 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 09:47:20 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	i = 0;

	while (str[i] != '\0')
	{
		if (!((str[i] >= ' ') && (str[i] <= '~')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
	char str[] = "\n"; 
	char *str_pointer = &str[0];

	int result = ft_str_is_printable(str_pointer); 

	printf(">>>%d", result);

	return (0);
}
