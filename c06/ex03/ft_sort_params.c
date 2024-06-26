/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:46:07 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/18 08:28:21 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int main(int argc, char *argv[])
{
	int j;
	int k;
	int l;
	char *temp_arg;

	j = 1;
	k = 2;
	l = 1;
	if (argc == 1)
		return 0;
	while (j < argc && k < argc)
	{	
		int compare_result = ft_strcmp(argv[j], argv[k]);
		if (compare_result != 0)
		{
			if (compare_result > 0)
			{//store temp arg -> swap
				temp_arg = argv[j];
				argv[j] = argv[k];
				argv[k] = temp_arg;
			}
		}
		j++;
		k++;
	}
	while (l < argc)
	{
		ft_putstr(argv[l]);
		ft_putstr("\n");
		l++;
	}
	return (0);
}
