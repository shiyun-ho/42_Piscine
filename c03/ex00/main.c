/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:46:57 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 21:50:02 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

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
