/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_epur.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:46:16 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/19 13:46:17 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
int check_for_space_ortab(char c)
{
	return(c == 32 || c >= 9 && c <= 13);
}
int main(int ac, char **av)
{
	int i = 0;
	int count;
	if(ac == 2)
	{
		while(check_for_space_ortab(av[1][i]))
			i++;
		while(av[1][i])
		{
			if (check_for_space_ortab(av[1][i]))
				count = 1;
			if(!check_for_space_ortab(av[1][i]))
			{
				if(count)
					write(1, " ", 1);
				count = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}