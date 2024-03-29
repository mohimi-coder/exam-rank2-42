/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:24:14 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/17 10:48:24 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int check_is_in_s1(char *s1, char c , int ldx)
{
	int i = 0;
	while(i < ldx)
	{
		if(s1[i] == c)
			return(0);
		i++;
	}
	return(1);
}
int find_chr(char *s, char c)
{
	int i = 0;
	while(s[i])
	{
		if (s[i] == c)
			return(0);
		i++;
	}
	return(1);
}

int main(int ac, char **av)
{
	int i;
	int j = 0;
	if (ac == 3)
	{
		i = 0;
		while(av[1][i])
		{
			if(check_is_in_s1(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		while(av[2][j])
		{
			if (check_is_in_s1(av[2], av[2][j], j)
				&& find_chr(av[1], av[2][j]))
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}