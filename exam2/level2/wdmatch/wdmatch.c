/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:24:59 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/18 04:06:06 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	if(ac == 3)
	{
		while (av[2][i])
		{
			if(av[2][i] == av[1][j])
				j++;
			i++;
		}
		i = 0 ;
		while(av[1][i])
			i++;
		if(i == j)
			write(1, av[1], i);
	}
	write(1, "\n", 1);
}