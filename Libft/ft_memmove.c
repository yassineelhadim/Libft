/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:37:56 by yel-hadi          #+#    #+#             */
/*   Updated: 2025/10/31 17:25:20 by yel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	mem_copy_forward(unsigned char *dest, const unsigned char *src,
// 		size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// }

// static void	mem_copy_backward(unsigned char *dest, const unsigned char *src,
// 		size_t n)
// {
// 	while (n > 0)
// 	{
// 		n--;
// 		dest[n] = src[n];
// 	}
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		*ptr_dest;

	ptr = (const unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	if (ptr == ptr_dest || n == 0)
		return (dest);
	if (ptr < ptr_dest)
		while (n--)
			ptr_dest[n] = ptr[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
