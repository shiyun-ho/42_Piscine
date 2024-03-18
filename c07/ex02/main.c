/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:28:39 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/18 10:05:13 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int min = -10;
    int max = 3;
    int *range;
    int size;
    int i;

    // Call ft_ultimate_range to allocate memory for the range array
    size = ft_ultimate_range(&range, min, max);

    // Check if memory allocation was successful
    if (size < 0) {
        printf("Error: Memory allocation failed\n");
        return 1; // Return an error code
    }

    // Initialize elements of the range array with values from min to max - 1
    for (i = 0; i < size; i++) {
        range[i] = min + i;
    }

    // Print the elements of the range array
    for (i = 0; i < size; i++) {
        printf("%d, ", range[i]);
    }

    // Free the allocated memory
    free(range);

    return 0; // Return success
}

