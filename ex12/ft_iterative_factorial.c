/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:05:54 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/06 15:05:55 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
		fact *= --nb;
	return (fact);
}
