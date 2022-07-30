/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumset <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:08:02 by msumset           #+#    #+#             */
/*   Updated: 2022/07/27 14:08:03 by msumset          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	char		*dizi;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	dizi = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dizi == NULL)
		return (NULL);
	while (*s1)
		dizi[i++] = *s1++;
	while (*s2)
		dizi[i++] = *s2++;
	dizi[i] = '\0';
	return (dizi);
}
