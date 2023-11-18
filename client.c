#include "minitalk.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int	i;
	int	bit;

	i = -1;
	if (ac == 3)
	{
		while (++i <= ft_strlen(av[2]))
		{
			bit = 0;
			while (bit < 8)
			{
				if (((av[2][i] >> bit) & 1) == 0)
				{
					printf("bit send\n");
					kill(atoi(av[1]), SIGUSR2);
				}
				else if (((av[2][i] >> bit) & 1) == 1)
				{
					printf("bi1t send\n");
					kill(atoi(av[1]), SIGUSR1);
				}
				usleep(100);
				bit++;
			}
			printf("\n");
		}
	}
}
