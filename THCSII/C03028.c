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
    int a[n];
    a[0] = 1;
    a[1] = 1;
    int b[n];
    printf("1\n");
    for (int i = 1; i < n; i++)
    {
        printf("1 ");
        for (int j = 1; j < i; j++)
            b[j] = a[j] + a[j - 1];
        for (int j = 1; j < i; j++)
        {
            a[j] = b[j];
            printf("%d ", b[j]);
        }
        a[i] = 1;
        printf("1\n");
    }
}

int main()
{
    solve();
}