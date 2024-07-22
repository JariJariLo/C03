/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:09:35 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/22 15:07:58 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*strncat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	i;
	size_t	j;

	while (dest[i] != '\0')
	{
		i++;
		dest_len = i;
	}
	while (j < n && src[j] != '\0')
	{
		dest[dest_len + j] = src[j];
		dest[dest_len + j] = '\0';
	}
	return (dest);
}
