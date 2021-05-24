#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int nto(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void solve()
{
    ll l, r;
    scanf("%lld%lld", &l, &r);
    l = ceil(sqrt(l));
    r = floor(sqrt(r));
    int res = 0;
    for (int i = l; i <= r; i++)
        if (nto(i))
            res++;
    printf("%d", res);
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