/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_try.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:22:13 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 15:05:31 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
/*
Takes the full size of buffer (not just length).
Guarantee the char[] ends with \0 (if size > 0)
A byte has to be reserved for \0
Copies up to size - 1 from src to dst
*/
	unsigned int	i;
	unsigned int	count;

	i = 0; 
	count = 0;
	while (src[count])
		count++;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

int main(void)
{
	char	src[] = "Hello World.";
	char *src_ptr = &src[0];

	char dest[] = " ";
	char *dest_ptr = &dest[0];

	unsigned int n;
	n = 100;

	ft_strlcpy(dest_ptr,src_ptr, n); 

	int i = 0;
	while (dest[i] && i < n - 1)
		{
			write(1, &dest[i], 1);
			i++;
		}
	
	return (0);
}
	
