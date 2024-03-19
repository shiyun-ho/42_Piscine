/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:40:28 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/19 15:43:29 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return i;
}

int ft_length(char **strs, int size, char *sep)
{
	int i;
	int length; 

	i = length = 0; 
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += (size - 1) * ft_strlen(sep) + 1;
	return length;
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];

