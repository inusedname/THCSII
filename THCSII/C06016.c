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
    gets(b);
    int p;
    scanf("%d", &p);
    if (p < 1)
        printf("%s%s", b, a);
    else if (p > strlen(a))
        printf("%s%s", a, b);
    else
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