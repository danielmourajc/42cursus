/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoura-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 07:34:50 by dmoura-d          #+#    #+#             */
/*   Updated: 2022/12/22 23:50:23 by dmoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_get_path(char *cmd, char **envp);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
void	ft_free(char **path);
void	ft_error(int arg, int nb);
void	child_process(int *fd, char **argv, char **envp);
void	parent_process(int *fd, char **argv, char **envp);
void	*ft_calloc(size_t count, size_t size);

#endif
