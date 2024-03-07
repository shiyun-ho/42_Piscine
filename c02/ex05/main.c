/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:24:13 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 09:32:20 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	char str[] = "123abc";
	char *str_pointer = &str[0];

	int result = ft_str_is_uppercase(str_pointer);

	printf(">>> %d:", result); 

	return (0); 
}
