/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:34:32 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/12 16:40:48 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int num; 
	int sign; 

	num = 0;
	sign = 0; 

	while ((*str <= '\t' && *str >= '\r') || (*str == ' '))
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign++;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10;
		num = num + *str - '0';
		++str;
	}
	if (!(sign % 2 == 0))
	{
		num = num * -1;
	}
	return num;
}
