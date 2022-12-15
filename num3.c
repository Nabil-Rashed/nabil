#include <stdio.h>

int main()
{
    int x;
    int b=0;
    printf("Enter a number : ");
    scanf ("%d",&x);
    while (x!=0)
    {
        x/=10;
        b++;
    }
    printf("Number of digits = %d",b);

        return 0;
}
