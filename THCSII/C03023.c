#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    int n;
    scanf("%d", &n);
    int dem = 0;
    int b[5];
    for (int i = 2; i <= n; i++)
    {
        int dem2 = 0;
        int flag = 1;
        int u = i;
        while (u > 0)
        {
            b[dem2++] = u % 10;
            u /= 10;
        }
        for (int j = 0; j < dem2; j++)
        {
            if (b[j] != b[dem2 - j - 1])
            {
                flag = 0;
                break;
            }
            if (b[j] == 9)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("%d ", i);
            dem++;
        }
    }
    printf("\n%d", dem);
}

int main()
{
    solve();
}