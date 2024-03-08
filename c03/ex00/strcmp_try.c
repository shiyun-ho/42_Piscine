/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_try.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:46:57 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 21:45:26 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Compares two strings, s1, s2. 
Returns an integer to show the result:
> 0: if s1 and s2 are equal
> -ve: if s1 is less than s2
> +ve: if s1 is more than s2
Value is determined by difference in values (unsigned char)
s2 (last compared byte) - s1 (last compared byte)
*/

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned	int i;
	unsigned	int j;
	unsigned	int s1_size;
	unsigned	int s2_size;
	int	diff;

	i = 0;
	j = 0;
	s1_size = 0;
	s2_size = 0;
	diff = 0;
	//Calculate the total acsii value of both strings
	while (s1[i] != '\0')
	{
		s1_size += s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s2_size += s2[j];
		j++;
	}
	printf(">>s1: %i\n", s1_size);
	printf(">>>s2: %i\n", s2_size);
	diff = s2_size - s1_size; 
	return (diff);
}

int main(void)
{
	char s1[] = "Hell";
	char *s1_ptr = &s1[0];
	char s2[] = "Hello";
	char *s2_ptr = &s2[0];

	int result = ft_strcmp(s1_ptr, s2_ptr);
	
	printf(">>>Difference (s2-s1): %i\n", result);
	return (0);
}
