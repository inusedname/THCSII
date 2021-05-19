#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
ll sum[2000002] = {0};
void solve()
{
    int n;
    scanf("%d", &n);
    int tmp;
    ll bigsum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        bigsum += sum[tmp];
    }
    printf("%lld", bigsum);
}

int main()
{
    sum[0] = 0;
    sum[1] = 0;
    for (int i = 2; i < 2000001; i++)
    {
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0)
            {
                sum[i] = j + sum[i / j];
                break;
            }
        if (sum[i] == 0)
            sum[i] = i;
    }
    solve();
}