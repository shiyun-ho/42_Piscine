/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_brute_force.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:22:51 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/14 10:42:59 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;
	int	sum;

	n = 0;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (n < nb)
	{
		sum = n * n; 
		if (sum == nb)
			return n;
		else if (sum > nb)
			return 0;
		n++;
	}
	n = 0;
	return n;
}
