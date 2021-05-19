#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int dem = 1;
void solve()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m - 1; j++)
            for (int z = j + 1; z < m; z++)
                if (a[i][j] > a[i][z])
                {
                    int u = a[i][j];
                    a[i][j] = a[i][z];
                    a[i][z] = u;
                }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n - 1; j++)
            for (int z = j + 1; z < n; z++)
                if (a[j][i] > a[z][i])
                {
                    int u = a[j][i];
                    a[j][i] = a[z][i];
                    a[z][i] = u;
                }
    printf("Test %d:\n", dem++);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        solve();
        printf("\n");
    }
}