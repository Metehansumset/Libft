/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumset <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:08:58 by msumset           #+#    #+#             */
/*   Updated: 2022/07/27 14:09:02 by msumset          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	unsigned int	len;
	long			m;

	m = n;
	len = 0;
	if (m < 0)
	{
		len++;
		m *= -1;
	}
	while (m > 9)
	{
		m /= 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		revind;
	int		misign;
	long	m;

	m = n;
	misign = 0;
	revind = ft_numlen(n);
	number = (char *)malloc(sizeof(char) * (ft_numlen(n) + 1));
	if (!number)
		return (NULL);
	number[revind] = '\0';
	if (m < 0)
	{
		misign = 1;
		m *= -1;
		number[0] = '-';
	}
	while (revind-- > misign)
	{
		number[revind] = (m % 10) + '0';
		m /= 10;
	}
	return (number);
}
