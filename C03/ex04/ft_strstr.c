/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verrodri <verrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:13:29 by verrodri          #+#    #+#             */
/*   Updated: 2024/03/16 17:59:23 by verrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str_src[] = "Help, i am under the water";
	char	str_find[] = "under";

	printf("Text:%s ", ft_strstr(str_src, str_find));
	printf("src:%s ", str_src);
	printf("Search:%s ", str_find);
	return (0);
}*/
