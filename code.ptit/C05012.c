#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int dem = 1;
void solve()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int ans[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
                a[i][j] = j + 1;
            else
                a[i][j] = 0;
            ans[i][j] = 0;
        }
    }
    printf("Test %d:\n", dem++);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ans[i][j] == 0)
            {
                int sum = 0;
                for (int z = 0; z < n; z++)
                    sum += a[i][z] * a[j][z];
                ans[i][j] = sum;
                ans[j][i] = sum;
            }
            printf("%d ", ans[i][j]);
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
