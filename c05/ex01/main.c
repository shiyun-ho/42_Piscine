/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:29:24 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/13 17:32:33 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
	for (int i = -3; i < 10; i++)
	{
		printf(">>>%i! : %i\n", i, ft_recursive_factorial(i));
	}
}
