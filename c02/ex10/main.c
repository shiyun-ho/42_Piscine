/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:22:13 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 15:17:41 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

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
	
