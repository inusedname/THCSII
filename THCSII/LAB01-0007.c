#include <stdio.h>
#include <math.h>
#include <string.h>
typedef long long ll;
typedef double db;

void solve()
{
    int n;
    scanf("%d", &n);
    db sum = 0;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        sum += tmp;
    }
    printf("%.3lf", sum / n);
}

int main()
{
    solve();
}