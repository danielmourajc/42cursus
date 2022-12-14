/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pipex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:26:10 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/12/14 00:41:29 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child_process(int *fd, char **argv, char **envp)
{
	int		infile;
	char	*path;
	char	**cmd;

	close(fd[0]);
	if (access(argv[1], R_OK) == -1)
		ft_error(6, 0);
	infile = open(argv[1], O_RDONLY);
	ft_error(3, infile);
	dup2(infile, STDIN_FILENO);
	close(infile);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	cmd = ft_split(argv[2], ' ');
	path = ft_get_path(cmd[0], envp);
	if (execve(path, cmd, envp) == -1)
	{
		ft_free(cmd);
		free(path);
		ft_error(5, 0);
	}
}

void	parent_process(int *fd, char **argv, char **envp)
{
	int		outfile;
	char	*path;
	char	**cmd;

	close(fd[1]);
	outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_error(4, outfile);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	dup2(outfile, STDOUT_FILENO);
	close(outfile);
	cmd = ft_split(argv[3], ' ');
	path = ft_get_path(cmd[0], envp);
	if (execve(path, cmd, envp) == -1)
	{
		ft_free(cmd);
		free(path);
		ft_error(5, 0);
	}
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
