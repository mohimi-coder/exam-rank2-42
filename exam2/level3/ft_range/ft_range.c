/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:14:16 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/19 14:14:19 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int *ft_range(int start, int end)
{
	int i = 0;
	int coun;
	if(end > start)
		coun = end - start + 1;
	else
		coun = start - end + 1;
	int *arr;
	arr = (int *)malloc(sizeof(int) * coun);
	while(i <= coun)
	{
		if(start < end)
		{
			arr[i] = start;
			start++;
			i++;
		}
		else
		{
			arr[i] = end;
			end--;
			i++;
		}
	}
	return(arr);
}
int main()
{
	int start = 4;
	int end = 0;
	int *result;
	result = ft_range(start, end);
	if(result != NULL)
	{
		int i = 0;
		while(i < 4)
		{
			printf("%d ", result[i]);
			i++;
		}
	}
	printf("\n");
}