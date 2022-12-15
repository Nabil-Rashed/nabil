#include <stdio.h>
#include <stdlib.h>
int Get_Max(int x,int y);

int main()
{
    int x,y;
    printf("enter your first number : \n");
    scanf("%d ",&x);
    printf("enter your second number : \n");
    scanf("%d ",&y);
    printf ("The max = %d",Get_Max(x,y));

    return 0;
}

int Get_Max(int x,int y)
{
    return (x>y) ? x : y;
        
}
