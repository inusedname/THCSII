#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

ll max(ll a, ll b)
{
    if (a > b)
        return a;
    return b;
}
void solve()
{
    int n;
    scanf("%d", &n);
    ll a[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    ll sum = 0;
    ll MAX = 0;
    for (int i = 0; i < n; i++)
    {
        sum = max(a[i], sum + a[i]);
        MAX = max(sum, MAX);
    }
    printf("%lld", MAX);
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