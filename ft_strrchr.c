/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:13:50 by mirsella          #+#    #+#             */
/*   Updated: 2022/11/10 00:12:23 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = 0;
	while (s[i])
	{
		if (s[i] == c)
			tmp = ((char *) s + i);
		i++;
	}
	if (s[i] == c)
		tmp = ((char *) s + i);
	return (tmp);
}
