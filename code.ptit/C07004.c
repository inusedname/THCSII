#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
ll ucln(ll a, ll b)
{
    while (a > 0)
    {
        if (a < b)
        {
            ll i = a;
            a = b;
            b = i;
        }
        a %= b;
    }
    return b;
}
int dem = 1;
void solve()
{
    ll a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    ll x = ucln(a, b);
    if (x > 1)
    {
        a /= x;
        b /= x;
    }
    x = ucln(c, d);
    if (x > 1)
    {
        c /= x;
        d /= x;
    }
    printf("Case #%d:\n", dem);
    x = (b / ucln(b, d)) * d;
    ll au = a * (x / b),
        cu = c * (x / d);
    printf("%lld/%lld %lld/%lld\n", au, x, cu, x);
    ll bu = x;
    x = ucln(au + cu, bu);
    printf("%lld/%lld\n", (au + cu) / x, bu / x);
    x = ucln(a * d, b * c);
    printf("%lld/%lld", (a * d) / x, (b * c) / x);
    dem++;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        getchar();
        solve();
    }
}