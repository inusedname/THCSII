#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char a[100];
    gets(a);
    for (int i = 0; i < strlen(a); i++)
        if (a[i] != ' ')
            printf("%c", a[i]);
}

int main()
{
    solve();
}