/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thihoang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:17:16 by thihoang          #+#    #+#             */
/*   Updated: 2023/11/24 11:29:37 by thihoang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	*temp;

	*temp = *a;
	*a = *b;
	*b = *temp;
}

/*
#include <stdio.h>
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 1;
	num2 = 2;
	ft_swap(&num1, &num2);
	printf("%d\n", num1);
	printf("%d\n", num2);
}
*/