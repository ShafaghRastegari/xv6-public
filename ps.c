#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char const *argv[])
{
    //write test for icp function
    int x = fork();
    if (x == 0)
    {
        //int *pr;
        int i;
        malloc(52428);
        while (1)
        {
            i = 1356 * 23;
            i = i * 4;
        }
    }
    else
    {
        int y = fork();
        if (y == 0)
        {
            //int *ptr;
            //int *poi;
            int j;
            malloc(10485);
            //poi = malloc(27*sizeof(*poi));
            while (1)
            {
                j = 234 * 432;
                j = j * 4;
            }
            exit();
        }
        else
        {
            printf(1, "x=%d\n", x);
            printf(1, "y=%d\n", y);
            sleep(1);
            icp();
            kill(x);
            kill(y);
            exit();
        }
    }
}