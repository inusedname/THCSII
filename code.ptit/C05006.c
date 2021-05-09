#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    int c, d;
    scanf("%d%d", &c, &d);
    c--;
    d--;
    int tmp;
    for (int i = 0; i < m; i++)
    {
        tmp = a[i][c];
        a[i][c] = a[i][d];
        a[i][d] = tmp;
    }
    for (int i = 0; i < m; i++)
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