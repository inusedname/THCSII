#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
char a[1000], b[1000];
int ans[1000];
void solve()
{
    for (int i = 0; i < 1000; i++)
    {
        a[i] = '\0';
        b[i] = '\0';
        ans[i] = 0;
    }
    gets(a);
    gets(b);
    while (strlen(a) < strlen(b))
    {
        for (int i = strlen(a) - 1; i >= 0; i--)
            a[i + 1] = a[i];
        a[0] = '0';
    }
    while (strlen(b) < strlen(a))
    {
        for (int i = strlen(b) - 1; i >= 0; i--)
            b[i + 1] = b[i];
        b[0] = '0';
    }
    int du = 0;
    int u = 0;
    for (int i = strlen(a) - 1; i >= 0; i--)
    {
        int sum = a[i] + b[i] - '0' - '0' + du;
        ans[u++] = sum % 10;
        du = sum / 10;
    }
    if (du)
        ans[u++] = du;
    for (int i = u - 1; i >= 0; i--)
        printf("%d", ans[i]);
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