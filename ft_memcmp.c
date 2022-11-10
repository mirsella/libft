/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:13:50 by mirsella          #+#    #+#             */
/*   Updated: 2022/11/10 17:52:32 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (*(unsigned char *)s1 && *(unsigned char *)s2 && i < n)
	{
		i++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
