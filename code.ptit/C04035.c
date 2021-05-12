#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
struct U
{
    int de;
    int re;
};
void solve()
{
    int n;
    scanf("%d", &n);
    struct U a[n];
    int depature = 0;
    int minDe = 50002;
    int minRe = 50002;
    int returnn = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i].de, &a[i].re);
        depature += a[i].de;
        returnn += a[i].re;
        if (a[i].de < minDe)
            minDe = a[i].de;
        if (a[i].re < minRe)
            minRe = a[i].re;
    }
    depature += minRe;
    returnn += minDe;
    if (depature < returnn)
        printf("%d", returnn);
    else
        printf("%d", depature);
}

int main()
{
    solve();
}