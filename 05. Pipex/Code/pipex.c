/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 07:30:39 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/12/14 00:36:37 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	int		pipefd[2];
	pid_t	pid;
	int		nb;

	if (argc != 5)
	{
		write(1, "Error: Please, check if there are 4 arguments\n", 46);
		exit(EXIT_FAILURE);
	}
	nb = pipe(pipefd);
	ft_error(1, nb);
	pid = fork();
	ft_error(2, pid);
	if (pid == 0)
		child_process(pipefd, argv, envp);
	waitpid(pid, NULL, 0);
	parent_process(pipefd, argv, envp);
	return (0);
}
