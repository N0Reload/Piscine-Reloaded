/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:06:18 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/13 17:45:24 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putendl(char *s)
{
	while (*s)
		ft_putchar(*s++);
	ft_putchar('\n');
}

void	ft_swap(char **s1, char **s2)
{
	char *tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char*)s1 - *(const unsigned char *)s2);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (av[i + 1])
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				ft_swap(&av[i], &av[i + 1]);
				i = 1;
			}
			else
				i++;
		}
		i = 1;
		while (av[i])
			ft_putendl(av[i++]);
	}
	return (0);
}
