/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erros_pipex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:51:58 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/12/14 00:40:26 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_error_aux(char *str)
{
	perror(str);
	exit(EXIT_FAILURE);
}

void	ft_error(int arg, int nb)
{
	if (nb == -1)
	{
		if (arg == 1)
			ft_error_aux("Pipe");
		else if (arg == 2)
			ft_error_aux("Fork");
		else if (arg == 3)
			ft_error_aux("Infile");
		else if (arg == 4)
			ft_error_aux("Outfile");
	}
	if (arg == 5)
	{
		write(2, "Error: command not found\n", 29);
		exit(EXIT_FAILURE);
	}
	if (arg == 6)
	{
		write(1, "Check existence and permissions of infile\n", 42);
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
