/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:50:17 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 10:39:01 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str);

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
