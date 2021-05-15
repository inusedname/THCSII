#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef unsigned long long ll;
typedef double db;
ll a, b, amax, bmax, amin, bmin;
int p;
ll POW(ll a)
{
    ll ans = 1;
    for (int i = 0; i < a; i++)
        ans *= 10;
    return ans;
}
void solve()
{
    scanf("%lld %lld", &a, &b);
    amax = a, bmax = b, amin = a, bmin = b;
    p = 0;
    while (a > 0)
    {
        if (a % 10 == 6)
            amin -= POW(p);
        if (a % 10 == 5)
            amax += POW(p);
        p++;
        a /= 10;
    }
    p = 0;
    while (b > 0)
    {
        if (b % 10 == 6)
            bmin -= POW(p);
        if (b % 10 == 5)
            bmax += POW(p);
        p++;
        b /= 10;
    }
    printf("%lld %lld", amin + bmin, amax + bmax);
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