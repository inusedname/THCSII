#include <stdio.h>
#include <math.h>
#include <string.h>
typedef long long ll;
typedef double db;

void solve()
{
    ll a, b;
    scanf("%lld%lld", &a, &b);
    if (a > b)
    {
        ll t = a;
        a = b;
        b = t;
    }
    int c[20];
    for (ll i = a; i <= b; i++)
    {
        int dem = 0;
        ll u = i;
        while (u > 0)
        {
            c[dem++] = u % 10;
            u /= 10;
        }
        int death_flag = 1;
        int thuannghich_flag = 1;
        int sum = 0;
        for (int j = 0; j < dem / 2; j++)
        {
            if (c[j] == 6)
                death_flag = 0;
            if (c[j] != c[dem - 1 - j])
            {
                thuannghich_flag = 0;
                break;
            }
            sum += c[j] * 2;
        }
        if (dem % 2)
        {
            sum += c[dem / 2];
            if (c[dem / 2] == 6)
                death_flag = 0;
        }
        if (thuannghich_flag && death_flag == 0)
            if (sum % 10 == 8)
                printf("%lld ", i);
    }
}

int main()
{
    solve();
}