/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_any_of.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:53:23 by msloot            #+#    #+#             */
/*   Updated: 2024/05/03 18:00:22 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_until_sep(const char *str, char *sep)
{
	size_t	i;
	size_t	s;

	i = 0;
	while (str[i] != '\0')
	{
		s = 0;
		while (str[i] == sep[s])
			s++;
		i++;
	}
	return (i);
}

static bool	process_word(char **split, ssize_t split_i, const char *str, char *sep)
{
	if (!split)
		return (true);
	split[split_i] = ft_strndup(str, ft_strlen_until_sep(str, sep));
	if (split[split_i])
		return (true);
	split_i--;
	while (split_i >= 0)
	{
		free(split[split_i]);
		split_i--;
	}
	free(split);
	return (false);
}

static ssize_t	process(char **split, const char *str, char *sep)
{
	ssize_t	split_i;
	size_t	i;
	size_t	s;

	split_i = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			s = 0;
			while (str[i] == sep[s])
				s++;
			i++;
		}
		if (str[i] != '\0')
		{
			if (!process_word(split, split_i, &str[i], sep))
				return (-1);
			split_i++;
		}
		while (str[i] != '\0')
		{
			s = 0;
			while (str[i] == sep[s])
				s++;
			i++;
		}
	}
	return (split_i);
}

char	**ft_split_any_of(char const *str, char *sep)
{
	char	**ret;
	size_t	word_count;

	if (!str)
		return (NULL);
	word_count = process(NULL, str, sep);
	ret = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!ret)
		return (NULL);
	if (process(ret, str, sep) == -1)
		return (NULL);
	ret[word_count] = NULL;
	return (ret);
}
