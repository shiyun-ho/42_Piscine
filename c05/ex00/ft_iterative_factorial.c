/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:13:20 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/12 17:18:56 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int sum = 0;
	while (nb > 1)
	{
		sum = nb * (nb - 1);
		nb--;
	}

	return sum;
}

int main()
{
	int nb = 2;
	ft_iteractive_factorial(nb);

	return 0;

}
