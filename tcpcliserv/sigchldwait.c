#include	"unp.h"

void
sig_chld(int signo)
{
	pid_t	pid;
	int		stat;

	pid = wait(&stat);
	printf("child %d terminated\n", pid);  // ���źŴ����� sig_chld �е��� printf �����ı�׼ I/O �����ǲ����ʵ�
	return;
}
