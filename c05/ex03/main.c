/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:44:56 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/03/13 18:58:34 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main(void)
{
	// Positive exponents
    printf("Positive exponents:\n");
    printf("2^3 = %d\n", ft_recursive_power(2, 3));  // Expected: 8
    printf("3^4 = %d\n", ft_recursive_power(3, 4));  // Expected: 81
    printf("5^2 = %d\n", ft_recursive_power(5, 2));  // Expected: 25

    // Negative exponents
    printf("\nNegative exponents:\n");
    printf("2^(-3) = %d\n", ft_recursive_power(2, -3));  // Expected: 0
    printf("3^(-2) = %d\n", ft_recursive_power(3, -2));  // Expected: 0

    // Exponent of zero
    printf("\nExponent of zero:\n");
    printf("2^0 = %d\n", ft_recursive_power(2, 0));  // Expected: 1
    printf("5^0 = %d\n", ft_recursive_power(5, 0));  // Expected: 1

    // Base equal to zero
    printf("\nBase equal to zero:\n");
    printf("0^3 = %d\n", ft_recursive_power(0, 3));  // Expected: 0
    printf("0^0 = %d\n", ft_recursive_power(0, 0));  // Expected: 1

    // Base equal to one
    printf("\nBase equal to one:\n");
    printf("1^3 = %d\n", ft_recursive_power(1, 3));  // Expected: 1
    printf("1^0 = %d\n", ft_recursive_power(1, 0));  // Expected: 1

    // Base and exponent both negative
    printf("\nBase and exponent both negative:\n");
    printf("(-2)^(-3) = %d\n", ft_recursive_power(-2, -3));  // Expected: 0
    printf("(-3)^(-2) = %d\n", ft_recursive_power(-3, -2));  // Expected: 0

    // Large exponents
    printf("\nLarge exponents:\n");
    printf("2^10 = %d\n", ft_recursive_power(2, 10));  // Expected: 1024
    printf("10^5 = %d\n", ft_recursive_power(10, 5));  // Expected: 100000

    return 0;
}
