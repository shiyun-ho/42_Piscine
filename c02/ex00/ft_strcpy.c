/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoshiyun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:03:18 by hoshiyun          #+#    #+#             */
/*   Updated: 2024/03/04 17:21:25 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
