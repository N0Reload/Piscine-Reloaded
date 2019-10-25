/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:06:59 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/12 17:39:48 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/display_file.h"
#define BUFF_SIZE 4096

static int	ft_display_file(char *s)
{
	int		fd;
	int		ret;
	char	buff[BUFF_SIZE + 1];

	fd = open(s, O_RDWR);
	if (fd == -1)
	{
		ft_putendl("open() error");
		return (-1);
	}
	while ((ret = read(fd, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		ft_putstr(buff);
	}
	return (0);
}

int			main(int ac, char **av)
{
	if (ac == 1)
		ft_putendl("File name missing.");
	else if (ac > 2)
		ft_putendl("Too many arguments.");
	else
		return (ft_display_file(av[1]));
	return (0);
}
