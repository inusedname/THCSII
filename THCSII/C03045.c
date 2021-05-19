#include <stdio.h>
#define ll long long
void solve()
{
    ll n;
    scanf("%lld", &n);
    ll prime = 2;
    while (n % 2 == 0)
    {
        n /= 2;
    }
    for (ll i = 3; i * i <= n; i += 2)
        if (n % i == 0)
        {
            prime = i;
            while (n % i == 0)
                n /= i;
        }
    if (n > 1)
        prime = n;
    printf("%lld", prime);
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