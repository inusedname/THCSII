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
    int sum1 = 0;
    int tmp = n;
    while (tmp > 0)
    {
        sum1 += tmp % 10;
        tmp /= 10;
    }
    int sum2 = 0;
    for (int i = 2; i <= n; i++)
        while (n % i == 0)
        {
            tmp = i;
            while (tmp > 0)
            {
                sum2 += tmp % 10;
                tmp /= 10;
            }
            n /= i;
        }
    if (sum1 == sum2)
        printf("YES");
    else
        printf("NO");
}

int main()
{
    solve();
}