/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_try_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:58:47 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/05 23:49:28 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *temp_ptr;
	temp_ptr = &dest[0]; 

	while (*src != '\0')
	{
		*dest = *src; 
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		n--;
	}

	return temp_ptr;
}

int	main(void)
{
	char	src[] = "hello";

	char *src_ptr;
	src_ptr = &src[0];

	char	dest[1024];
	char	*dest_ptr = &dest[0];

	unsigned int n;
	n = 1024;

	ft_strncpy(dest_ptr, src_ptr, n);

	while (*src_ptr != '\0')
	{
		write(1, src_ptr, 1);
		src_ptr++;
	}
}
