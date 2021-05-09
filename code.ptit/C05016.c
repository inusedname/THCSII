#include <stdio.h>
#include <math.h>
#include <string.h>
typedef long long ll;
typedef double db;

void solve()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int num = 1;
    int spec = 0;
    while (num <= n * n)
    {
        for (int i = spec; i < n - spec; i++)
            a[spec][i] = num++;
        if (num > n * n)
            break;
        for (int i = spec + 1; i < n - spec; i++)
            a[i][n - 1 - spec] = num++;
        for (int i = n - 2 - spec; i >= spec; i--)
            a[n - 1 - spec][i] = num++;
        for (int i = n - 2 - spec; i >= spec + 1; i--)
            a[i][spec] = num++;
        spec++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main()
{
    solve();
}