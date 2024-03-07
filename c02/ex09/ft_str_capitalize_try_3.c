/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_capitalize_try_3.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:10:51 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 13:50:28 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Capitalize first letter of each word. 
Transforms all other letters to lower case. 
Need to capitalize first letter.
Pattern: After (, ? . ;)
*/
char	*ft_strcapitalize(char *str)
{
//if str[0] | str[i] follows (, ? . ;)
//Upper case
	int	i;
	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if ((i == 0) || (str[i - 1] < '/'))
			{
				str[i] = str[i] - 32;
			}
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *str_ptr = &str[0];

	ft_strcapitalize(str_ptr);

	int i = 0; 
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}

	return (0);
}
