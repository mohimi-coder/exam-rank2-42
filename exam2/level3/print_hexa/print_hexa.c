/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:15:49 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/19 14:15:54 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_atoi(char *str)
{
	int i = 0;
	int r = 0;
	while(str[i] != '\0')
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	return(r);
}
void ft_print_hexa(int nbr)
{
	char *hexa = "0123456789abcdef";
	if(nbr >= 16)
		ft_print_hexa(nbr / 16);
	ft_putchar(hexa[nbr % 16]);
}
int main(int ac, char **av)
{
	if(ac == 2)
		ft_print_hexa(ft_atoi(av[1]));
	write(1, "\n", 1);
}