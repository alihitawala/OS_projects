//
// Created by alihitawala on 2/11/16.
//
#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    if(argc < 2){
        printf(2, "usage: setpri <priority>{1,2}...\n");
        exit();
    }
    setpri(atoi(argv[1]));
    exit();
}