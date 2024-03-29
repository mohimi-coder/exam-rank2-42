/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:15:31 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/29 16:40:59 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
unsigned int gcd(unsigned int x, unsigned int y)
{
	unsigned int temp;
	while(y != 0)
	{
		temp = y;
		y = x % y;
		x = temp;
	}
	return(x);
}

int main(int ac, char **av)
{
	if(ac == 3)
		printf("%d", gcd(atoi(av[1]), atoi(av[2])));
	printf("\n");
}