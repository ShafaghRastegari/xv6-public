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
        printf(1, "x=%d\n", x);
        int *pr;
        int i;
        pr = malloc(4 * sizeof(*pr));
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
            printf(1, "y=%d\n", y);
            int *ptr;
            //int *poi;
            int j;
            ptr = malloc(17 * sizeof(*ptr));
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
            sleep(1);
            icp();
            //kill(x);
            //kill(y);
            exit();
        }
    }
}