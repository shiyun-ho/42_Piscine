/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:06:03 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/18 16:43:51 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	char	*dest_temp;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}

void	*create_string(char *concat_str, char **strs, char *sep, int strlen_total, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		ft_strcat(concat_str, strs[j]);
		ft_strcat(concat_str, sep);
		j++;
	}
	concat_str[strlen_total] = '\0';
	return concat_str;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat_str;
	int		i;
	int		strlen_total;

	if (size == 0)
		return ("");
	i = 0;
	strlen_total = 0;
	while (i < size)
	{
		strlen_total += ft_strlen(strs[i]);
		i++;
	}
	strlen_total += (size - 1) * ft_strlen(sep);
	concat_str = (char *)malloc((strlen_total + 1) * sizeof(char));
	if (concat_str == NULL)
		return (0);
	create_string(concat_str, strs, sep, strlen_total, size);
	return (concat_str);
}
