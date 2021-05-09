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
        printf("%c ", 'A' - 1 + i);
        int sum = i;
        int dem = 1;
        for (int j = n - 1; dem++ < i; j--)
        {
            sum += j;
            printf("%c ", 'A' - 1 + sum);
        }
        printf("\n");
    }
}

int main()
{
    solve();
}