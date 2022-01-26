#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, sum=0;

    a=100;
    do
    {
        sum=sum+a;
        a--;
    }
    while(a>=1);

    printf("1+2+3+.......+100 = %d",sum);


    getch();
    return 0;
}
