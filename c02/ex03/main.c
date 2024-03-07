/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:06:21 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 15:32:31 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char str[] = "_-j23jj12i3,";
	char *str_pointer = &str[0];

	int result = ft_str_is_numeric(str_pointer);

	printf(">>> %d ", result);

	return (0);
}
