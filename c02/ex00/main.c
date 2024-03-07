/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoshiyun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:03:18 by hoshiyun          #+#    #+#             */
/*   Updated: 2024/03/04 17:23:04 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[] = "I love going to 42";
	char *src_pointer = &src[0];

	int size = sizeof(src) / sizeof(src[0]); 

	char dest[size];
	char *dest_pointer = &dest[0];
	
	ft_strcpy(dest_pointer, src_pointer);

	printf("%s \n", dest);
	return (0);
}

