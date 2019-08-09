#include <stdio.h>
#include <unistd.h>

//bitwise operation same as dividing
int main()
{
    int i = 16;
    while(i>0)
    {
        printf("%d \t", i>>1);
        i-=2;
        sleep(1);
    }
}