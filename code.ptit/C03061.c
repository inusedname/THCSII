#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    ll num;
    scanf("%lld", &num);
    int s[20];
    int n = 0;
    while (num > 0)
    {
        s[n] = num % 10;
        n++;
        num /= 10;
    }
    if ((s[0] == (s[n - 1] * 2)) || ((s[0] * 2) == s[n - 1]))
    {
        for (int i = 1; i * 2 < n; i++)
            if (s[i] != s[n - 1 - i])
            {
                printf("NO");
                return;
            }
        printf("YES");
    }
    else
    {
        printf("NO");
    }
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