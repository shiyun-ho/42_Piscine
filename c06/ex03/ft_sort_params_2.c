/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:59:44 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/15 13:20:24 by hshi-yun         ###   ########.fr       */
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

//Some function to sort according to acsii order 

int main(int argc, char *argv[])
{
	int j;

	j = 1;
	if (argc == 1)
		return 0;
	while (j < argc)
	{	
		ft_putstr(argv[j]);
		ft_putstr("\n");
		j++;
	}
	return (0);
}
