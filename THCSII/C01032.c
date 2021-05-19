#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
ll n, tich;

void solve()
{
    scanf("%lld", &n);
    tich = 1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            tich *= i;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n)
        tich *= n;
    printf("%lld", tich);
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