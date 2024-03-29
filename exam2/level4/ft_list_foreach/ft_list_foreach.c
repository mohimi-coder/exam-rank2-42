/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:34:24 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/29 15:35:05 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;
	list_ptr = begin_list;
	while(list_ptr)
	{
		(*f)(list_ptr->data);

	}
}