/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strspn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:23:29 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/23 10:28:00 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strchr(const char *s, int c)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}
size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	while(s[i])
	{
		if(ft_strchr(accept, s[i]))
			break;
		i++;
	}
	return(i);
}
int main(void)
{
	const char *s = "abcd12";
	const char *accept = "abca";
	size_t result = ft_strspn(s, accept);
	printf("Length of initial segment: %zu\n", result);
	return 0;
}