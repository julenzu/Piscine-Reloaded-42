/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzuazo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 10:24:50 by jzuazo            #+#    #+#             */
/*   Updated: 2026/09/26 10:24:56 by jzuazo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	write_all(int fd, char *buffer, int size)
{
	int	written;
	int	total;

	total = 0;
	while (total < size)
	{
		written = write(fd, buffer + total, size - total);
		if (written == -1)
			return (1);
		total += written;
	}
	return (0);
}

int	copy_file(int fd)
{
	int		bytes_read;
	char	buffer[1024];

	bytes_read = read(fd, buffer, 1024);
	while (bytes_read > 0)
	{
		if (write_all(1, buffer, bytes_read) == 1)
		{
			close(fd);
			return (1);
		}
		bytes_read = read(fd, buffer, 1024);
	}
	close(fd);
	if (bytes_read == -1)
	{
		write_all(2, "Cannot read file.\n", 18);
		return (1);
	}
	return (0);
}

int	display_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write_all(2, "Cannot read file.\n", 18);
		return (1);
	}
	if (copy_file(fd) == 1)
	{
		close(fd);
		return (1);
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (write_all(2, "File name missing.\n", 19));
	if (argc > 2)
		return (write_all(2, "Too many arguments.\n", 20));
	return (display_file(argv[1]));
}
