/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:46:02 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/10 18:48:22 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <fcntl.h>
# include <sys/types.h>
# include <unistd.h>

void	ft_putstr(char *s);
void	ft_putendl(char *s);
int		ft_strlen(char *s);

#endif
