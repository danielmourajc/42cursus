/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pipex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:26:10 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/12/10 17:45:14 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_isnegative(int nb)
{
	if (nb == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
}

void	ft_free(char **path)
{
	int	i;

	i = 0;
	while (path[i])
	{
		free(path[i]);
		i++;
	}
	free(path);
}

char	**ft_find_path(char **envp)
{
	int		i;
	char	*paths;
	char	**path;

	i = 0;
	while (envp[i] && ft_strncmp(envp[i], "PATH=", 5))
		i++;
	if (!envp[i])
		return (NULL);
	paths = ft_strchr(envp[i], '/');
	path = ft_split(paths, ':');
	return (path);
}

char	*ft_get_path(char *cmd, char **envp)
{
	int		i;
	int		fd;
	char	*the_path;
	char	**all_paths;

	all_paths = ft_find_path(envp);
	i = 0;
	while (all_paths[i])
	{
		the_path = ft_strjoin(ft_strjoin(all_paths[i], "/"), cmd);
		fd = open(the_path, O_RDONLY);
		if (fd >= 0)
		{
			ft_free(all_paths);
			close(fd);
			return (the_path);
		}
		free(the_path);
		i++;
	}
	ft_free(all_paths);
	return (NULL);
}
