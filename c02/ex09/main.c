/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:10:51 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 15:40:30 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char str[] = "Hello";
	char *str_ptr = &str[0];

	ft_strcapitalize(str_ptr);

	int i = 0; 
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}

	return (0);
}
