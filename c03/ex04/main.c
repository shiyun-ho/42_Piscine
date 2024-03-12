/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 09:58:51 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/10 10:04:45 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char str[] = "Hello";
	char substr[] = "llo";

	char *str_ptr = &str[0];
	char *substr_ptr = &substr[0];

	ft_strstr(str_ptr, substr_ptr);
	
	printf("%s", ft_strstr(str_ptr, substr_ptr));

	return 0;
}

	
