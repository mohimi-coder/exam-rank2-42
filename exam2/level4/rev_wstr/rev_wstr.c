/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:35:34 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/29 15:31:43 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int start;
	int end;
	int i =0;
	if(ac == 2)
	{
		while(av[1][i])
			i++;
		while(i >= 0)
		{
			while(av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
				i--;
			end = i;
			while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			start = i + 1;
			int flag = start;
			while(start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if(flag)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
