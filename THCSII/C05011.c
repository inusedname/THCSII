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
    int b[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            b[i][j] = 0;
    printf("Test %d:\n", dem++);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] == 0)
            {
                int sum = 0;
                for (int z = 0; z < m; z++)
                    sum += a[i][z] * a[j][z];
                b[i][j] = sum;
                b[j][i] = sum;
            }
            printf("%d ", b[i][j]);
        }
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