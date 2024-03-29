/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:52:32 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/16 15:03:41 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

char	*ft_strdup(const char *src)
{
	char *dest;
	int i = 0;
	int len;

	len = ft_strlen(src);
	dest = malloc(sizeof(char) * (len + 1));
	if(!dest)
		return(NULL);
	while(i < len)
	
}
int main()
{
	const char *mine = "mohamed himi";
	char *theirs;
	theirs = ft_strdup(mine);
	printf("mine: %s\n", mine);
	printf("theirs: %s\n", theirs);
}
