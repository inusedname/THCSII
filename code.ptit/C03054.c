#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef unsigned long long ll;
typedef double db;

void solve()
{
    ll n;
    scanf("%llu", &n);
    if (n == 0 || n == 9 || n == 8)
    {
        printf("0");
        return;
    }
    int ans[20] = {0};
    int p = 0;
    while (n > 0)
    {
        int tmp = n % 10;
        if (tmp != 0 && tmp != 1 && tmp != 8 && tmp != 9)
        {
            printf("INVALID");
            return;
        }
        if (tmp == 1)
            ans[p++] = 1;
        else
            ans[p++] = 0;
        n /= 10;
    }
    int i = p - 1;
    while (i >= 0 && ans[i] == 0)
        i--;
    if (i < 0)
        printf("INVALID");
    else
        for (; i >= 0; i--)
            printf("%d", ans[i]);
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