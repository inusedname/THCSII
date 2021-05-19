#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 2; i <= n && k > 0; i += 2)
    {
        int tmp = i;
        while (tmp % 2 == 0)
        {
            k--;
            tmp /= 2;
        }
    }
    if (k > 0)
        printf("No");
    else
        printf("Yes");
}

int main()
{
    solve();
}