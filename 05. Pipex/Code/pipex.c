/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 07:30:39 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/12/10 17:47:29 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child_process(int *fd, char **argv, char **envp)
{
	int		infile;
	char	*path;
	char	**cmd;

	close(fd[0]);
	infile = open(argv[1], O_RDONLY);
	ft_isnegative(infile);
	dup2(infile, STDIN_FILENO);
	close(infile);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	cmd = ft_split(argv[2], ' ');
	path = ft_get_path(cmd[0], envp);
	if (execve(path, cmd, envp) == -1)
	{
		perror("Error");
		ft_free(cmd);
		free(path);
		exit(EXIT_FAILURE);
	}
}

void	parent_process(int *fd, char **argv, char **envp)
{
	int		outfile;
	char	*path;
	char	**cmd;

	close(fd[1]);
	outfile = open(argv[4], O_WRONLY | O_TRUNC | O_CREAT, 0766);
	ft_isnegative(outfile);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	dup2(outfile, STDOUT_FILENO);
	close(outfile);
	cmd = ft_split(argv[3], ' ');
	path = ft_get_path(cmd[0], envp);
	if (execve(path, cmd, envp) == -1)
	{
		perror("Error");
		ft_free(cmd);
		free(path);
		exit(EXIT_FAILURE);
	}
}

int	main(int argc, char **argv, char **envp)
{
	int		pipefd[2];
	pid_t	pid;
	int		nb;

	if (argc != 5)
	{
		write(2, "Error: Please check your arguments\n", 34);
		exit(EXIT_FAILURE);
	}
	nb = pipe(pipefd);
	ft_isnegative(nb);
	pid = fork();
	ft_isnegative(pid);
	if (pid == 0)
		child_process(pipefd, argv, envp);
	waitpid(pid, NULL, 0);
	parent_process(pipefd, argv, envp);
	return (0);
}
