#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include "d_params.h"

#define set_demand(arg1, arg2) syscall(341, arg1, arg2)

int main()
{

    printf("Test1 starts here ...\n");

    int i = 0;
    set_demand(-1, 10);

    while (i < 100000000)
    {
        i++;
    }
    printf("Test1 stops here ...\n");
}
