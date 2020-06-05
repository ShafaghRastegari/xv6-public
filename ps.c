#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char const *argv[])
{
    //write test for icp function
    int x = fork();
    if (x>0){
    int *pr;
    int i;
    pr = malloc(4*sizeof(*pr));
    while (3000)
    {
        i = 1356*23;
        i=i*4;
    }
    exit();
    }
    int y = fork();
    if (y>0){
    int *ptr;
    //int *poi;
    int j;
    ptr = malloc(17*sizeof(*ptr));
    //if (ptr != 0)
    //{
        *(ptr+16)=480;
    //}
    //poi = malloc(27*sizeof(*poi));
    while (3000)
    {
        j = 234*432;
        j= j*4;
    }
    exit();
    }
    sleep(1);
    if (x == 0 && y == 0){
    icp();
    }
    exit();
}
