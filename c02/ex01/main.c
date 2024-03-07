/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:58:47 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 15:59:29 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "hello";

	char *src_ptr;
	src_ptr = &src[0];

	char	dest[] = "___";
	char	*dest_ptr = &dest[0];

	unsigned int n;
	n = 3;

	ft_strncpy(dest_ptr, src_ptr, n);

	while (*src_ptr != '\0' && n > 0)
	{
		write(1, src_ptr, 1);
		src_ptr++;
		n--;
	}
}
