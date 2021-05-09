#include <stdio.h>
#include <math.h>
#include <string.h>
typedef long long ll;
typedef double db;

void solve()
{
    int n;
    scanf("%d", &n);
    ll fibo[n * n];
    fibo[0] = 0;
    fibo[1] = 1;
    int step = 2;
    while (step < n * n)
    {
        fibo[step] = fibo[step - 1] + fibo[step - 2];
        step++;
    }
    int a[n][n];
    int num = 0;
    int spec = 0;
    while (num < n * n)
    {
        for (int i = spec; i < n - spec; i++)
            a[spec][i] = fibo[num++];
        if (num > n * n)
            break;
        for (int i = spec + 1; i < n - spec; i++)
            a[i][n - 1 - spec] = fibo[num++];
        for (int i = n - 2 - spec; i >= spec; i--)
            a[n - 1 - spec][i] = fibo[num++];
        for (int i = n - 2 - spec; i >= spec + 1; i--)
            a[i][spec] = fibo[num++];
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