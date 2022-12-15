#include<stdio.h>
void fibonacciSeries(int range)
{
    int x=0;
    int y=1;
    int z;
    while (x<=range)
    {
        printf("%d\t", x);
        z = x+y;
        x = y;
        y = z;
    }
}

int main()
{
    int range;

    printf("Enter range: ");
    scanf("%d", &range);

    printf("The fibonacci series is: \n");

    fibonacciSeries(range);

    return 0;
}
