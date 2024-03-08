/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:46:57 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 21:57:58 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int				diff;
	unsigned int	i;
	unsigned int	j;
	unsigned int	s1_size;
	unsigned int	s2_size;

	i = 0;
	j = 0;
	s1_size = 0;
	s2_size = 0;
	diff = 0;
	while (s1[i] != '\0')
	{
		s1_size += s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s2_size += s2[j];
		j++;
	}
	diff = s1_size - s2_size;
	return (diff);
}
