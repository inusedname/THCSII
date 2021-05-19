#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
char a[1005], b[1005];
int ans[1005];
void diff(char a[], char b[])
{
    int u = 0;
    int du = 0;
    for (int i = strlen(a) - 1; i >= 0; i--)
    {
        int dif = a[i] - b[i] - du;
        if (dif < 0)
        {
            dif += 10;
            du = 1;
        }
        else
            du = 0;
        ans[u++] = dif;
    }
    while (ans[u - 1] == 0 && u > 1)
        u--;
    for (int i = u - 1; i >= 0; i--)
        printf("%d", ans[i]);
}
void solve()
{
    gets(a);
    gets(b);
    if (strlen(a) < strlen(b))
    {
        while (strlen(a) < strlen(b))
        {
            for (int i = strlen(a); i >= 0; i--)
                a[i + 1] = a[i];
            a[0] = '0';
        }
        diff(b, a);
        return;
    }
    if (strlen(b) < strlen(a))
    {
        while (strlen(b) < strlen(a))
        {
            for (int i = strlen(b); i >= 0; i--)
                b[i + 1] = b[i];
            b[0] = '0';
        }
        diff(a, b);
        return;
    }
    if (strcmp(a, b) > 0)
        diff(a, b);
    else
        diff(b, a);
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