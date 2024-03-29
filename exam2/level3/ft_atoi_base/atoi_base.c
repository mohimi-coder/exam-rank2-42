/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:57:19 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/29 15:57:22 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
int ft_get_dec(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	return (-1);
}
int ft_atoi_base(char *str, int str_base)
{

	int res = 0;
	int number = 0;
	int i = 0;
	int si = 1;
	if(str[i] == '-')
	{
		si = -1;
		i++;
	}
	while (str[i])
	{
		if ((number = ft_get_dec(to_lower(str[i]))) != -1)
		{
			res = (res * str_base) + number;
		}
		else
			break;
		i++;
	}
	return (res  * si);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi_base("-422BB", 16));
}
