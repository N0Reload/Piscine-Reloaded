/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:06:26 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/13 16:37:13 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *dest;

	i = 0;
	if (min >= max)
		return (0);
	dest = (int *)malloc(sizeof(int) * (max - min));
	if (dest == NULL)
		return (NULL);
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
