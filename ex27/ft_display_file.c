/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:53:09 by etordjma          #+#    #+#             */
/*   Updated: 2018/11/08 12:56:11 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
////#include <sys/types.h>
////#include <sys/stat.h>
#include <fcntl.h>
#define BUFFER 25000

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_read_file(int fd)
{
	int		size;
	char	buffer[BUFFER];

	size = BUFFER;
	size = read(fd, buffer, size);
	buffer[size] = '\0';
	ft_putstr(buffer);
}

int		ft_open_file(char *file)
{
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("ERROR\n");
		return (fd);
	}
	ft_read_file(fd);
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc >= 3)
		ft_putstr("Too many arguments.\n");
	else
		ft_open_file(argv[1]);
	return (0);
}
