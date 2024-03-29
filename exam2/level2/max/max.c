/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:20:36 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/23 10:21:42 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// int max(int *tab, unsigned int len)
// {
// 	unsigned int i = 0;
// 	int tmp = tab[i];
// 	if(len == 0)
// 		return(0);
// 	while(i < len - 1)
// 	{
// 		if (tmp < tab[i + 1])
// 			tmp = tab[i + 1];
// 		i++;
// 	}
// 	return(tmp);
// }
int max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int temp = tab[i++];
	if(len == 0)
		return(0);
	while(i < len)
	{
		if(temp < tab[i])
			temp = tab[i];
		i++;
	}
	return(temp);
}
int main()
{
	int arr[] = {300, -75, 8, 200, 11, -85, 10, 5, 45, 90, 250, 95, 100, 500};
	unsigned int arr_len = sizeof(arr) / sizeof(int);

	int maximum = max(arr, arr_len);

	printf("The maximum value in the array is: %d\n", maximum);

	return 0;
}
