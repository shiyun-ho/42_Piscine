/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:36:16 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/14 17:16:11 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return 0;
	while (i < nb)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int	ft_find_next_prime(int nb)
{
	int next_prime;
	int result; 

	if (nb < 2)
		next_prime = 2;
	next_prime = nb;
	while (ft_is_prime(next_prime) == 0)
	{
		result = ft_is_prime(next_prime);
		if (result == 1)
			return next_prime;
		next_prime++;
	}
	if (ft_is_prime(nb) == 1)
		return nb;
	return next_prime;
}
