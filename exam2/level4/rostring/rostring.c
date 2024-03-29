/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:26:56 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/27 15:26:59 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;
	int start = 0;
	int end = 0;
	if(ac > 1 && av[1][0])
	{
		while(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
			i++;
		start = i;
		while(!(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13)) && av[1][i])
			i++;
		end = i;
		while(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
			i++;
		while(av[1][i])
		{
			while(!(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13)) && av[1][i])
				write(1, &av[1][i++], 1);
			while(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
				i++;
			write(1, " ", 1);
		}
		while(start < end)
		{
			write(1, &av[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
}