#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int ucln(int a, int b)
{
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
    return b;
}
void solve()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (ucln(a, b) == ucln(c, d))
        printf("YES");
    else
    {
        printf("NO");
    }
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