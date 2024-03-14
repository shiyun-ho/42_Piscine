/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:11:42 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/13 17:14:40 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int main(void)
{
	for (int i = -3; i < 11; i++)
	{
		printf(">>>%i ! = %i\n", i, ft_iterative_factorial(i));
	}
}
