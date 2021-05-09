#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    int a[100] = {1};
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            printf("%d", a[j]);
        for (int j = i - 2; j >= 0; j--)
            printf("%d", a[j]);
        a[i] = 2 * i + 1;
        printf("\n");
    }
}

int main()
{
    solve();
}