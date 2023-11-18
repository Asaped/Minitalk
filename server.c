#include "minitalk.h"

t_list	msg;

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	receive_msg(int signum)
{
	if (signum == SIGUSR1)
	{
		msg.c |= (1 << msg.bit);
		msg.bit++;
	}
	else if (signum == SIGUSR2)
	{
		msg.bit++;
	}
	if (msg.bit == 8)
	{
		if (msg.c)
			ft_putchar(msg.c);
		else
			ft_putchar('\n');
		msg.bit = 0;
		msg.c = 0;
	}
}

int	main(void)
{
	pid_t	pid;

	msg.bit = 0;
	pid = getpid();
	printf("My process ID is %d\n", pid);
	signal(SIGUSR1, receive_msg);
	signal(SIGUSR2, receive_msg);
	while (1)
	{
		//signal(SIGUSR1, receive_msg);
		//signal(SIGUSR2, receive_msg);
		pause();
	}
}
