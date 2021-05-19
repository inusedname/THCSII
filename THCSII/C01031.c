#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int nto(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
void solve()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1");
        return;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            n /= i;
            if (n == 1)
            {
                n *= i;
                break;
            }
            printf("%dx", i);
        }
    }
    if (n > 1)
        printf("%d", n);
}

int main()
{
    solve();
}