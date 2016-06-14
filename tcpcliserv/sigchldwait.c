#include	"unp.h"

void
sig_chld(int signo)
{
	pid_t	pid;
	int		stat;

	pid = wait(&stat);
	printf("child %d terminated\n", pid);  // 在信号处理函数 sig_chld 中调用 printf 这样的标准 I/O 函数是不合适的
	return;
}
