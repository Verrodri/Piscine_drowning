/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verrodri <verrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:49:53 by verrodri          #+#    #+#             */
/*   Updated: 2024/03/11 18:10:13 by verrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest); 
}

/*int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Bye";

	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	return (0);
}*/
