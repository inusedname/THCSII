#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    int n;
    scanf("%d", &n);
    ll a[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                ll tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            printf("%lld ", a[i]);
    for (int i = 0; i < n; i++)
        if (a[i] % 2)
            printf("%lld ", a[i]);
}

int main()
{
    solve();
}