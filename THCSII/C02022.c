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
    int step = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j <= i; j++)
                printf("%d ", step++);
        else
        {
            for (int j = step + i; j >= step; j--)
                printf("%d ", j);
            step += i + 1;
        }
        printf("\n");
    }
}

int main()
{
    solve();
}