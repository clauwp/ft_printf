#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	if (n > -10 && n < 0)
	{
		write(fd, "-", 1);
		c = -n + '0';
	}
	else if (n <= -10)
		c = -(n % 10) + '0';
	else if (n >= 0)
		c = (n % 10) + '0';
	write(fd, &c, 1);
}
