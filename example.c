#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd;
	char buf[14];

	/* create a file, write into it */

	fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);

	if (fd == -1){
		printf("Failed to create and open the file. \n");
		exit(1);
	}

	write (fd, "Hello World!\n", 13);
	close(fd);

	/*read from the file we just wrote to */

	fd = open("myfile.txt", O_RDONLY);

	if (fd == -1)
	{
		printf("Failed to open and read the file.\n");
		exit(1);
	}

	read (fd, buf, 5);
	close(fd);

	printf("\nFirst 5 chars of buffer is: %s\n\n", buf);

	return (0);
}
