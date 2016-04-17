
#include <linux/unistd.h>

#define __NR_seopcall 341

int getMultiple(int n)
{
	return syscall(__NR_seopcall, n);	
}

