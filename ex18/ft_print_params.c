/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:06:15 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/06 15:09:47 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

int		main(int ac, char **av)
{
	ac = 1;
	while (av[ac])
	{
		ft_putstr(av[ac++]);
		ft_putchar('\n');
	}
}
