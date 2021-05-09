#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char a[200];
    char b[200];
    gets(a);
    getchar();
    gets(b);
    int p;
    scanf("%d", &p);
    for (int i = 0; i < strlen(a); i++)
    {
        if (i == p - 1)
            printf("%s", b);
        printf("%c", a[i]);
    }
}

int main()
{
    solve();
}