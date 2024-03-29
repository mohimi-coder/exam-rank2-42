/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversbits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:22:07 by mohimi            #+#    #+#             */
/*   Updated: 2024/03/23 10:26:45 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (res);
}
