#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef unsigned long long ll;
typedef double db;
ll bcnn(ll a, ll b)
{
    ll a1 = a, b1 = b;
    while (a > 0)
    {
        if (a < b)
        {
            ll tmp = a;
            a = b;
            b = tmp;
        }
        a %= b;
    }
    return (a1 / b) * b1;
}
void solve()
{
    int n;
    scanf("%d", &n);
    ll res = 1;
    for (int i = n; i > 1; i--)
        if (res % i)
            res = bcnn(res, i);
    printf("%llu", res);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
        printf("\n");
    }
}