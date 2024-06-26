/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:30:39 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/19 18:43:29 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int total_length(int size, char **strs, char *sep)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += ((size - 1) * ft_strlen(sep)) + 1;
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = 0;
	return (dest);
}

char *create_string(char *concat_str, char **strs, char *sep, int size)
{
	int	j;
	int strlen_total;

	j = 0;
	while (j < size)
	{
		ft_strcat(concat_str, strs[j]);
		ft_strcat(concat_str, sep);
		j++;
	}
	strlen_total = total_length(size, strs, sep);
	concat_str[strlen_total] = '\0';
	return concat_str;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *concat_str;
	int	strlen_total;

	if (size == 0)
	{
		concat_str = (char *)malloc(1 * sizeof(char));
		return (concat_str);
	}
	strlen_total = total_length(size, strs, sep);
	concat_str = (char *) malloc((strlen_total) * sizeof(char));
	if (concat_str == NULL)
		return NULL;
	create_string(concat_str, strs, sep, size);
	return (concat_str);
}
