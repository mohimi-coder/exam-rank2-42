/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:32:34 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/16 21:32:37 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	int j;
	int i = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if (s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return(i);
}
int main()
{
	char *s1 = "ABCDEF4960910a";
	char *s2 = "49";
	printf("%zu\n", strcspn(s1, s2));
}