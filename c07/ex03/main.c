/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:02:29 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/18 16:15:01 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char *strs[] = {"Hello", "World", "!", "Boo", "I", "no", "like", "sleep", "deprivation", "."};
	char *sep = " ";

	char *result = ft_strjoin(10, strs, sep);
	if (result == NULL)
		return 1;
	printf("Concat string: %s\n", result);

	free(result);

	return 0;
}
