#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 1.0000;
    for (double i = 2.00; i <= n;i++)
    {
        sum += 1 / i;    
    }
    printf("%.4lf", sum);
}