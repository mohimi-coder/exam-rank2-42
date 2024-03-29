/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbaz.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:06:48 by mohimi            #+#    #+#             */
/*   Updated: 2024/02/20 23:06:53 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void putnbr(int nbr)
{
	if (nbr < 10)
		ft_putchar(nbr + 48);
	else
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
}
int main()
{
	int i = 1;
	while(i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			putnbr(i);
		i++;
		write (1, "\n", 1);
	}
}
