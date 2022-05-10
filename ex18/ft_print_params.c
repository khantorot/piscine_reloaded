/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glychest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 23:29:34 by glychest          #+#    #+#             */
/*   Updated: 2019/09/04 21:06:39 by glychest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int l, char **data)
{
	int i;

	i = 1;
	while (i < l)
	{
		ft_putstr(data[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
