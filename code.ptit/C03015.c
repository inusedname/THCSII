#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
ll n, i;

void solve()
{
    scanf("%lld", &n);
    for (i = 2; i * i <= n; i++)
        while (n % i == 0)
            n /= i;
    if (n == 1)
        printf("%lld", i - 1);
    else
        printf("%lld", n);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        getchar();
        solve();
        printf("\n");
    }
}