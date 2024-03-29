/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:33:11 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/19 14:13:49 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int if_is_prime(int n)
{
	int i = 2;
	if(n <= 1)
		return(0);
	while(i * i <= n)
	{
		if(n % i == 0)
			return(0);
		i++;
	}
	return(1);
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_punbr(int nbr)
{
	if(nbr < 10)
		ft_putchar(nbr + 48);
	else
	{
		ft_punbr(nbr / 10);
		ft_punbr(nbr % 10);
	}
}
int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while(str[i])
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return(res);
}
int main(int ac, char **av)
{
	long s = 0;
	if(ac != 2)
	{
		write(1, "0\n", 2);
		return(0);
	}
	if(ac == 2)
	{
		int nm = ft_atoi(av[1]);
		while(nm > 0)
		{
			if(if_is_prime(nm))
				s += nm;
			nm--;
		}
		ft_punbr(s);
	}
	write(1, "\n", 1);
}