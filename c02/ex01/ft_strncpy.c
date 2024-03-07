/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:58:47 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/07 15:56:52 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*temp_ptr;

	temp_ptr = &dest[0];
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		n--;
		dest++;
		src++;
	}
	while (n > 0)
	{
		*dest = '\0';
		n--;
	}
	return (temp_ptr);
}
