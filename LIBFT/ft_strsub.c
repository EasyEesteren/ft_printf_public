/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wvan-ees <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/23 13:10:28 by wvan-ees      #+#    #+#                 */
/*   Updated: 2019/02/04 19:35:07 by wvan-ees      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	unsigned	i;

	i = 0;
	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	sub = (char*)malloc(sizeof(*s) * len + 1);
	if (sub == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
