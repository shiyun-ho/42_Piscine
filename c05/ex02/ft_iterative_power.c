/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:49:00 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/13 17:49:02 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_iterative_power(int nb, int power)
{
	int sum;

	sum = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 1)
		return (1);
	else
	{
		while (power > 0)
		{
			sum = sum * nb;
			power--;
		}
		return sum;
	}
}

