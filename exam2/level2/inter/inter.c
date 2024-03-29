/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:18:55 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/16 21:18:58 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int find_char(char *s, char c, int ldx)
{
	int i = 0;
	while(i < ldx)
	{
		if (s[i] == c)
			return(0);
		i++;
	}
	return(1);
}
int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	if(ac == 3)
	{
		while(av[1][i])
		{
			if(find_char(av[1], av[1][i], i))
			{
				j = 0;
				while(av[2][j])
				{
					if (av[1][i] == av[2][j])
					{
						write(1, &av[1][i], 1);
						break;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);

}