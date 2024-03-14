/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:02:11 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/13 20:10:24 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int main(void)
{
	for (int i = -3; i < 10; i++)
		printf(">>>idx: %i = %i\n", i, ft_fibonacci(i));

	return (0);
}
