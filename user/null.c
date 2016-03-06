#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
    int* p = 0;
    printf(1, "%p \n", p);
    printf(1, "value = %d \n", (unsigned int) *p);
    exit();
}