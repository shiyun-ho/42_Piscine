/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:54:51 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/15 11:58:16 by hshi-yun         ###   ########.fr       */
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

int main(int argc, char *argv[])
{
	int j;

	j = argc - 1;
	if (argc == 1)
		return 0;
	while (j > 0)
	{	
		ft_putstr(argv[j]);
		ft_putstr("\n");
		j--;
	}
	return (0);
}

