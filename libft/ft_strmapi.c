/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-aiss <ael-aiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:52:15 by ablabib           #+#    #+#             */
/*   Updated: 2025/03/15 23:11:15 by ael-aiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			s_len;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!ptr)
		return (NULL);
	while (i < s_len)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[s_len] = '\0';
	return (ptr);
}
