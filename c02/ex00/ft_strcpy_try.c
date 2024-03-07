/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_try.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoshiyun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:03:18 by hoshiyun          #+#    #+#             */
/*   Updated: 2024/03/04 17:15:04 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduces behaviour of strcpy
/* 	Copy the string src to dst (including the terminating ‘\0’ character.)
	Copy at most len characters from src into dst.
	If src is less than len characters long, the remainder of dst is filled with ‘\0’
	characters.  Otherwise, dst is not terminated.
	Source and destination strings should not overlap, as the behavior is undefined.
*/

#include <stdio.h>

//Expects a return of char* (i.e. character pointer)
char	*ft_strcpy(char *dest, char *src)
{
	//Check if src is null
	if(src == 0)
	{
		return 0;
	}

	//Retrieve memory address of the dest[0]
	char	*pointer;
	pointer = dest;

	while (*src != '\0') // while source hasnt reached the end memory address
	{
		*dest = *src; 
		src++;
		dest++;
	}

	*dest = '\0'; //access last memory address value and set to "\0"

	return pointer; //return dest[0] since we have copied it over
}

int	main(void)
{
	char src[] = "Hello World!";
	char *src_pointer = &src[0];

	int size = sizeof(src) / sizeof(src[0]); 

	char dest[size];
	char *dest_pointer = &dest[0];
	
	ft_strcpy(dest_pointer, src_pointer);

	printf("%s \n", dest);
	return (0);
}

