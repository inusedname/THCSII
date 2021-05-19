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
    int a[101] = {0};
    int b[n];
    int tmp;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        a[tmp]++;
        b[i] = tmp;
        if (a[tmp] > max)
            max = a[tmp];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[b[i]] == max)
        {
            printf("%d ", b[i]);
            a[b[i]] = 0;
        }
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