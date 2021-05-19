#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
db a, b, c, d;
void solve()
{
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    printf("%.4lf", sqrt((c - a) * (c - a) + (d - b) * (d - b)));
}

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        solve();
        printf("\n");
    }
}