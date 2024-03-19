/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:02:29 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/19 19:30:27 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
    // Test case 1: Empty Input Strings
    char *strs_empty[] = {};
    char *sep_empty = "-";
    char *result_empty = ft_strjoin(0, strs_empty, sep_empty);
	printf("%s"
    if (result_empty == NULL)
        return 1;
    printf("Empty input strings\n");

/*
    // Test case 2: Null Pointer Handling - ISSUE!!!!! NEED TO ADDRESS!
    char *strs_null[] = {NULL, "Hello", NULL, "World", NULL};
    char *sep_null = "-";
    char *result_null = ft_strjoin(5, strs_null, sep_null);
    if (result_null == NULL)
        return 1;
    printf("Null pointer handling: '%s'\n", result_null);
*/
    //Test case 3: Single String Handling
    char *strs_single[] = {"Hello"};
    char *sep_single = "-";
    char *result_single = ft_strjoin(1, strs_single, sep_single);
    if (result_single == NULL)
        return 1;
    printf("Single string: '%s'\n", result_single);


    // Test case 4: Special Characters
    char *strs_special[] = {"New\nLine", "Tab\t", "Special#Chars"};
    char *sep_special = "!";
    char *result_special = ft_strjoin(3, strs_special, sep_special);
    if (result_special == NULL)
        return 1;
    printf("Special characters: '%s'\n", result_special);

    // Test case 5: Large Input
    char *strs_large[] = {"Hello", "World", "!", "Boo", "I", "no", "like", "sleep", "deprivation"};
    char *sep_large = "_";
    char *result_large = ft_strjoin(9, strs_large, sep_large);
    if (result_large == NULL)
        return 1;
    printf("Large input: '%s'\n", result_large);

    // Test case 6: Memory Allocation
    char *strs_memory[] = {"Memory", "Allocation"};
    char *sep_memory = "-";
    char *result_memory = ft_strjoin(2, strs_memory, sep_memory);
    if (result_memory == NULL)
        return 1;
    printf("Memory allocation: '%s'\n", result_memory);

    return 0;
}
