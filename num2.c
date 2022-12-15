#include <stdio.h>
#include <stdlib.h>
int swap(int x,int y);

int main()
{
    int x,y;
    printf("Enter your first number: \n");
    scanf("%d ",&x);
    printf("Enter your second number: \n");
    scanf("%d ",&y);
    swap (x,y);

    return 0;
}

int swap(int x,int y)
{
    int z=x;
    x=y;
    y=z;
    printf ("After Swap :\n%d\n%d",x,y);
}
