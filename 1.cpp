#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid=fork();
	if(pid<0)
	{
		perror("fork Deng");
		return 1;
	}
	else if (pid==0)
	{
		printf("child call:");
		printf("Child id:%d\n",getpid());
		printf("Parent id:%d\n",getppid());
	}
	else{
		printf("Parent call:");
		printf("Parent id:%d\n",getpid());
		printf("Child call:%d\n",pid());
	}
	return 0;
}
