#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef unsigned long long ll;
typedef double db;
ll fibo[1000];
void solve()
{
    ll n;
    scanf("%lld", &n);
    for (int i = 0; fibo[i] <= n; i++)
        if (fibo[i] == n)
        {
            printf("YES");
            return;
        }
    printf("NO");
}

int main()
{
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 1000; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    int t;
    scanf("%d", &t);
    while (t--)
    {
        getchar();
        solve();
        printf("\n");
    }
}