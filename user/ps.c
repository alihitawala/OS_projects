//
// Created by alihitawala on 2/11/16.
//
#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"
#include "param.h"

int
main(int argc, char *argv[])
{
    struct pstat* p;
    p = malloc(sizeof(*p));
    memset(p, 0, sizeof(*p));
    getpinfo(p);
    int i=0;
    printf(1, "PID HTicks LTicks\n");
    for (i=0;i<NPROC;i++) {
        if (p->inuse[i] == 1)
            printf(1, "%d\t%d\t%d\n", p->pid[i], p->hticks[i], p->lticks[i]);
    }
    exit();
}