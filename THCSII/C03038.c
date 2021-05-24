#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    ll n, p, res = 0;
    scanf("%lld%lld", &n, &p);
    int multi = (log(n) / log(p)) - 1;
    printf("%d\n", multi);
    n = (n / p);
    printf("%lld", n + ((multi * (multi + 1)) / 2));
}

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        solve();
        printf("\n");
    }
}