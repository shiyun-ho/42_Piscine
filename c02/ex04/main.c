/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:37:27 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 09:20:36 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char str[] = "abc123abc"; 
	char *str_pointer = &str[0]; 

	int result = ft_str_is_lowercase(str_pointer); 

	printf(">>> %d", result); 

	return (0);
}
