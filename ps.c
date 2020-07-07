#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char const *argv[])
{
    int a,b;
    //write test for icp function
    //2 fork and with malloc reserve n byte of memory to 
    //running or runnable process and show my func work correct
    int x = fork();
    //this if check that child make
    if (x == 0)
    {
        waitx(&a,&b);
        //int *pr;
    
        //reserve n byte
        malloc(52428);
        int i;
        //do something
        while (i<900000000)
        {
            i++;
        }
        
        exit();
        
    }
    else
    {
        //its do similiar that fork 
        
        int y = fork();
        if (y == 0)
        {
            waitx(&a,&b);
            //int *ptr;
            //int *poi;
            int j;
            malloc(10485);
            
            //poi = malloc(27*sizeof(*poi));
             while (j<900000)
             {
                j++;
             } 
            exit();     
        }
        else
        {
            printf(1, "x=%d\n", x);
            printf(1, "y=%d\n", y);
            set_priority(y,40);
            set_priority(x,70);
            
            //call our syscall
            sleep(10);
            icp();
            //kill child to have not zombie process
            kill(x);
            kill(y);
            exit();
        }
    }
}