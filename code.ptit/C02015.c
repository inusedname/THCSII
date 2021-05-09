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
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
            for (int j = 0; j < i; j++)
                printf("%d", j * 2 + 1);
        else
            for (int j = 1; j <= i; j++)
                printf("%d", j * 2);
        printf("\n");
    }
}

int main()
{
    solve();
}