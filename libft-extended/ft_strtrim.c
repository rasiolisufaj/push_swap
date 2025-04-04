/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raisufaj <raisufaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:46:39 by raisufaj          #+#    #+#             */
/*   Updated: 2024/11/18 12:00:27 by raisufaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	if (start > end)
		return (ft_substr(s1, 0, 0));
	return (ft_substr(s1, start, end - start));
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *s1 = "!!!!!Hello World!!!!!";
	char *set = "!";
	char *result = ft_strtrim(s1, set);

	if(result)
	{
		printf("Trimmed string: '%s'\n", result);
		free(result);
	}
	return (0);
}*/
