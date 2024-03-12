/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:28:06 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/12 15:10:12 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	short parity;
	int	number; 

	parity = number = 0;

	//check for whitespace and skip if there is whitespace
	while (*str >= '\t' && *str <= '\r' || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10;
		number = number + *str - '0';
		++str;
	}
	//is the value even
	if (! (parity % 2))
		return (number);
	//invert numbers 
	return (-number);
}
