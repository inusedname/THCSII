#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int nto(ll n)
{
    if (n == 1)
        return 0;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
ll a, b, tmp;
int dem, sum, chuso, flag;
void solve()
{
    dem = 0;
    scanf("%lld%lld", &a, &b);
    if (a > b)
    {
        ll i = a;
        a = b;
        b = i;
    }
    for (ll i = a; i <= b; i++)
    {
        sum = 0;
        tmp = i;
        flag = 1;
        while (tmp > 0)
        {
            chuso = tmp % 10;
            if (chuso != 2 && chuso != 3 && chuso != 5 && chuso != 7)
            {
                flag = 0;
                break;
            }
            sum += chuso;
            tmp /= 10;
        }
        if (flag && nto(sum))
            if (nto(i))
                dem++;
    }
    printf("%d", dem);
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