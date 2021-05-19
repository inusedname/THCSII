#include <stdio.h>
#include <math.h>
#include <string.h>
typedef long long ll;
typedef double db;
int dem = 1;
void solve()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int num = n * n;
    int spec = 0;

    while (num > 0)
    {
        for (int i = spec; i < n - spec; i++)
            a[spec][i] = num--;
        if (num <= 1)
            break;
        for (int i = spec + 1; i < n - spec; i++)
            a[i][n - 1 - spec] = num--;
        for (int i = n - 2 - spec; i >= spec; i--)
            a[n - 1 - spec][i] = num--;
        for (int i = n - 2 - spec; i >= spec + 1; i--)
            a[i][spec] = num--;
        spec++;
    }
    printf("Test %d:\n", dem++);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        getchar();
        solve();
        printf("\n");
    }
}