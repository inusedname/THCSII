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
        printf("%d ", i);
        int sum = i;
        int dem = 1;
        for (int j = n - 1; dem++ < i; j--)
        {
            sum += j;
            printf("%d ", sum);
        }
        printf("\n");
    }
}

int main()
{
    solve();
}