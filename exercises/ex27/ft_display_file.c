/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:20:35 by jheiskan          #+#    #+#             */
/*   Updated: 2021/10/28 22:06:10 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	ft_error_chk(int argc)
{
	if (argc == 1)
	{
		write (2, "File name missing.\n", 19);
		return (-1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (-1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buf;

	if (ft_error_chk(argc) == -1)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Failed to open file.", 20);
		return (1);
	}
	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
	close(fd);
	return (0);
}
