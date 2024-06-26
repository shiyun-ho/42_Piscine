/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:13:20 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/13 17:13:43 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int sum = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		sum = sum * nb;
		nb--;
	}
	return sum;
}
