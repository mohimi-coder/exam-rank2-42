/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:09:51 by mohimi            #+#    #+#             */
/*   Updated: 2024/02/20 23:09:54 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	if(ac == 2)
	{
		while (av[1][i])
			i++;
		while(i)
			write (1, &av[1][--i], 1);
	}
	write(1, "\n", 1);
}