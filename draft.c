#include <stdio.h>

int main()
{
    long long a;
    scanf("%lld", &a);
    int demChan = 0, demLe = 0;
    while (a>0)
    {
        if ((a%10)%2)
        {
            demLe++;
        }
        else
            demChan++;
        a = a / 10;
    }
    printf("%d %d", demLe, demChan);
}