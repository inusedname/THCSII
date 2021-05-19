#include <stdio.h>
#include <math.h>
#include <string.h>
typedef long long ll;
typedef double db;

void solve()
{
    int a, b;
    scanf("%d%d", &a, &b);
    while (a > 0)
    {
        if (a < b)
        {
            int i = a;
            a = b;
            b = i;
        }
        a %= b;
    }
    printf("%d", b);
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