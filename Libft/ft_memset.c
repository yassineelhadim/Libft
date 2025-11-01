/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:08:31 by yel-hadi          #+#    #+#             */
/*   Updated: 2025/10/31 17:48:32 by yel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main()
// {
// 	int x = 5;
// 	unsigned char *p = (unsigned char *)&x;
// 	ft_memset(p, 57, 1);
// 	ft_memset(p + 1, 5, 1);
// 	ft_memset(p + 2, 0, 2);
// 	printf("%d\n", x);
// }