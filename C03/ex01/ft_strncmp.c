/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verrodri <verrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:10:34 by verrodri          #+#    #+#             */
/*   Updated: 2024/03/16 13:31:15 by verrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

/*int main(void) 
{
	char *s1 = "drowning";
	char *s2 = "swimming";

	int result = ft_strncmp(s1, s2, 4);

	if (result == 0) 
	{
		printf("Strings are equal\n");
	} 
	else if (result < 0) 
	{
		printf("First string is less than second\n");
	} else {
		printf("First string is greater than second\n");
	}

	return 0;
}*/