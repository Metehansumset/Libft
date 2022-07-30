/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumset <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:07:00 by msumset           #+#    #+#             */
/*   Updated: 2022/07/27 14:07:02 by msumset          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbayt, size_t size)
{
	void	*str;

	str = malloc(size * nbayt);
	if (!str)
		return (NULL);
	return (ft_memset(str, 0, size * nbayt));
}
