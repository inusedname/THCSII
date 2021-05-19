#include <stdio.h>
#include <math.h>
#include <string.h>
typedef long long ll;
typedef double db;
int b[401];
int count = 1;
int nto(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void solve()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int num = 0;
    int spec = 0;
    while (num < n * n)
    {
        for (int i = spec; i < n - spec; i++)
            a[spec][i] = b[num++];
        if (num > n * n)
            break;
        for (int i = spec + 1; i < n - spec; i++)
            a[i][n - 1 - spec] = b[num++];
        for (int i = n - 2 - spec; i >= spec; i--)
            a[n - 1 - spec][i] = b[num++];
        for (int i = n - 2 - spec; i >= spec + 1; i--)
            a[i][spec] = b[num++];
        spec++;
    }
    printf("Test %d:\n", count++);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main()
{
    int dem = 0;
    for (int i = 2; dem <= 400; i++)
        if (nto(i))
            b[dem++] = i;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        getchar();
        solve();
        printf("\n");
    }
}