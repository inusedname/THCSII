#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int dem = 1;
void solve()
{
    int m, n;
    scanf("%d%d", &n, &m);
    int a[m][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    int max = 0;
    int indexI;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
            sum += a[i][j];
        if (sum > max)
        {
            max = sum;
            indexI = i;
        }
    }
    int indexJ;
    max = 0;
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
            if (i == indexI)
                continue;
            else
                sum += a[i][j];
        if (sum > max)
        {
            max = sum;
            indexJ = j;
        }
    }
    printf("Test %d:\n", dem++);
    for (int i = 0; i < n; i++)
    {
        if (i == indexI)
            continue;
        for (int j = 0; j < m; j++)
            if (j == indexJ)
                continue;
            else
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