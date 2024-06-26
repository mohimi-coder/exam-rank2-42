/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_off2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 10:18:49 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/23 10:19:04 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if(n == 0)
		return(0);
	while(n % 2 == 0)
		n /= 2;
	if(n == 1)
		return(1);
	return(0);

}
int main()
{
	printf("%d", is_power_of_2(5));
}
