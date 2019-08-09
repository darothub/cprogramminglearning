#include <stdio.h>
#include <unistd.h>

//bitwise operation same as multiplying
int main()
{
    int i = 10;
    while(i>0)
    {
        printf("%d \t", i<<1);
        i--;
        sleep(1);
    }
}