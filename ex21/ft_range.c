/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glychest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:44:51 by glychest          #+#    #+#             */
/*   Updated: 2019/09/04 16:15:36 by glychest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int i;
	int l;

	if (min >= max)
		return (NULL);
	i = 0;
	l = max - min;
	res = (int *)malloc(sizeof(min) * l);
	while (i < l)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
