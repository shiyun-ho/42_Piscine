/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:22:51 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/14 16:10:25 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long start;
	long mid;
	long end;
	long sum;

	if (nb == 0 || nb == 1)
		return nb;
	if (nb < 0)
		return 0;
	start = 1;
	end = nb;
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		sum = mid * mid;
		if (sum == nb)
			return (int)mid;
		else if (sum < nb)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (0);
}
