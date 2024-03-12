/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_try.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:58:37 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/09 12:10:02 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Find the '\0' 
Terminate the '\0' byte
Appends 'src' string to 'dest' string (dest) - terminate '\0' - (src)
Add terminating '\0'
*CAUTION: If dest is not large enough, buffer overruns happen
*/
#include <unistd.h>
#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	char *dest_temp;

	i = 0;
	j = 0;
	dest_temp = &dest[0];
	while (dest[i] == '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (src[j] == '\0')
	{
		dest[i] = '\0';
	}
	return dest;
}

int main(void)
{
	char source[] = "well";
	char *src_ptr = &source[0];

	char destination[] = "rare";
	char *dest_ptr = &destination[0];

	ft_strcat(dest_ptr, src_ptr); 

	//while (dest_ptr++)
	//{
	//	write(1, dest_ptr, 1);
	//}

	printf("%s", destination);
	return (0);
}
