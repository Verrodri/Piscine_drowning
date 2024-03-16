/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verrodri <verrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:55:10 by verrodri          #+#    #+#             */
/*   Updated: 2024/03/13 16:18:22 by verrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
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

	int result = ft_strcmp(s1, s2);

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