/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:09:37 by mohimi            #+#    #+#             */
/*   Updated: 2024/02/20 23:09:40 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	int count;
	if (ac == 2)
	{
		while(av[1][i])
		{
			if((av[1][i] >= 'A' && av[1][i] <= 'Z' || av[1][i] >= 'a' && av[1][i] <= 'z'))
			{
				if(av[1][i] >= 'a' && av[1][i] <= 'z')
					count = av[1][i] - 'a';
				else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
					count = av[1][i] - 'A';
				while(count-- > 0)
					write(1, &av[1][i], 1);
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}