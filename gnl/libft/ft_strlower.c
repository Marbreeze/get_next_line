/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstratu <mstratu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 20:03:26 by mstratu           #+#    #+#             */
/*   Updated: 2019/03/06 19:51:09 by mstratu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strlower(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		s[i] = ft_tolower(s[i]);
		i++;
	}
	return (s);
}