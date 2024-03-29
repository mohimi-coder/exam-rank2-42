/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:15:10 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/19 14:15:20 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nbr)
{
	if(nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}
int main(int ac, char **av)
{
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return(0);
}