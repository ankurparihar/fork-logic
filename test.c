// program to test fork logic
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	// place the fork-logic output here
	// to check for large values use './test | wc -l' # it counts the lines in the output
	// output for 5001
	pid_t p;
	if ((p = fork()) == 0)
	{
		fork();
		fork();
		fork();
		if ((p = fork()) == 0)
		{
			fork();
			fork();
			fork();
			fork();
			if ((p = fork()) == 0)
			{
				fork();
				if ((p = fork()) == 0)
				{
					fork();
					if ((p = fork()) == 0)
					{
						fork();
						fork();
						fork();
					}
				}
			}
		}
	}

	printf("Hello fork-logc!\n");
	wait(NULL);
	return 0;
}