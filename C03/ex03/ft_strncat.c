/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verrodri <verrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:46:55 by verrodri          #+#    #+#             */
/*   Updated: 2024/03/16 17:30:31 by verrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	p;
	i = 0;
	p = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[p] != '\0' && nb > p)
	{
		dest[i] = src[p];
		i++;
		p++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main()
{
	char dest[] = "Sup, ";
	char src[] = "duck";
	int nb = 4;

	printf("%s\n", dest);
	ft_strncat(dest, src, nb);
	printf("%s\n", dest);

	return (0);
}*/