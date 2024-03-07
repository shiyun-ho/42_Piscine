/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:10:51 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 15:39:36 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if ((i == 0) || (str[i - 1] < '/'))
				str[i] = str[i] - 32;
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			if (i != 0)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
