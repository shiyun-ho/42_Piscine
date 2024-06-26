/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:46:57 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/08 10:26:47 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
		{
			diff = diff + (s1[i] - s2[i]); 
		}
		if (s1[i]> s2[i])
		{
			diff = diff + (s1[i] - s2[i]); 
		}
		i++; 
	}
	return diff;
}
