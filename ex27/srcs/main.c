/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glychest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:54:18 by glychest          #+#    #+#             */
/*   Updated: 2019/09/05 18:22:29 by glychest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_display_file(char *filename)
{
	int		f;
	char	ch;

	f = open(filename, O_RDONLY);
	if (f < 0)
		return ;
	while (read(f, &ch, 1))
		write(1, &ch, 1);
	close(f);
}

int		main(int l, char **data)
{
	if (l == 1)
		write(2, "File name missing.\n", 19);
	else if (l > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display_file(data[1]);
	return (0);
}
