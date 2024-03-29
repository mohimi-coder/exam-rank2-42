/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:32:24 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/29 15:32:27 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char *ft_strncpy(char *s1, char *s2, int l)
{
	int i = 0;
	while(s2[i] && i < l)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] =0;
	return (s1);
}

char **split(char *s)
{
	int i=0;
	int j=0;
	int wc=0;
	int x =0 ;
	char **word;
	while(s[i])
	{
		while(s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
			i++;
		if(s[i])
			wc++;
		while(s[i] && (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'))
			i++;
	}
	i = 0;
	word = (char **)malloc(sizeof(char *)*(wc+1));
	while(s[i])
	{
		while(s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
			i++;
		j  = i;
		while(s[i] && (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'))
			i++;
		if(i > j)
		{
			word[x] = malloc((i-j) + 1);
			ft_strncpy(word[x++], &s[j], i - j);
		}
	}
	word[x] = NULL;
	return (word);
}

#include <stdio.h>
int main()
{
	char **res= split("aziz moha hamza elabdi");
	int i=0;
	while(res[i])
	{
		printf("%s\n", res[i++]);
	}
}