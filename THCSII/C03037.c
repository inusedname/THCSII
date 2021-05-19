#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char a[20];
    gets(a);
    int f[10] = {0};
    for (int i = 0; i < strlen(a); i++)
        if (a[i] == '2' || a[i] == '3' || a[i] == '5' || a[i] == '7')
            f[a[i] - '0']++;
    for (int i = 2; i < 8; i++)
        if (f[i])
            printf("%d %d\n", i, f[i]);
}

int main()
{
    solve();
}