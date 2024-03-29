/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:19:08 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/19 14:19:11 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	int i;
	int nbr;
	if(ac == 2)
	{
		i = 1;
		nbr = atoi(av[i]);
		if(nbr == 1)
			printf("1");
		while(nbr >= ++i)
		{
			if(nbr % i == 0)
			{
				printf("%d", i);
				if(nbr == i)
					break;
				printf("*");
				nbr /= i;
				i = 1;
			}
		}
	}
	printf("\n");
}