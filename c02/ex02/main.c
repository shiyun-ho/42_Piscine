/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 23:53:59 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 08:35:14 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main()
{
	char str[] = "123abcde123"; 
	char *str_ptr = &str[0]; 

	int result = ft_str_is_alpha(str_ptr);

	printf(">>>%d ", result);

	return (0); 
}
