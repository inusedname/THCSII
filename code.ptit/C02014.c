#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

int min(int i, int j)
{
    if (i < j)
        return i;
    else
        return j;
}
int max(int i, int j)
{
    if (i < j)
        return j;
    else
        return i;
}
void solve()
{
    int n;
    scanf("%d", &n);
    int k = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d", n - min(i, j));
        for (int j = n + 1; j < 2 * n; j++)
            printf("%d", max(n - min(i, j), n - 1 - k + j));
        printf("\n");
    }
    for (int i = n; i < k + 1; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d", max(n - k + i, n - j));
        for (int j = n; j < 2 * n - 1; j++)
            printf("%d", max(n - k + j, n - k + i));
        printf("\n");
    }
}

int main()
{
    solve();
}