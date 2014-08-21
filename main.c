#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define CHR_DEV_NAME "/dev/my_chr_dev"

int main(void)
{
	int ret;
	char buf[32];
	int fd = open(CHR_DEV_NAME, O_RDONLY|O_NDELAY);
	if(fd < 0)
	{
		printf("open file %s failed\n", CHR_DEV_NAME);
		return -1;
	}
	printf("Open file successfully!\n");
	read(fd, buf, 32);
	close(fd);
	
	return 0;
}
