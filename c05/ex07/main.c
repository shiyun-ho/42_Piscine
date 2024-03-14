/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:03:17 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/14 17:04:53 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	for (int i = -3; i < 21; i++)
		printf("%i: Prime/ next prime? >>>%i\n", i, ft_find_next_prime(i));
}
