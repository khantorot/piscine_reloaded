/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glychest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 23:43:20 by glychest          #+#    #+#             */
/*   Updated: 2019/09/04 16:12:29 by glychest         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int l, char **data)
{
	int i;

	i = 1;
	if (l > 1)
	{
		while (i < l - 1)
		{
			if (ft_strcmp(data[i], data[i + 1]) > 0)
			{
				data[0] = data[i];
				data[i] = data[i + 1];
				data[i + 1] = data[0];
				i = 0;
			}
			i++;
		}
		i = 1;
		while (i < l)
		{
			ft_putstr(data[i++]);
			ft_putchar('\n');
		}
	}
	return (0);
}
