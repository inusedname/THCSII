#include <stdio.h>
#include <math.h>
#include <string.h>
typedef long long ll;
typedef double db;

void solve()
{
    char a[102];
    gets(a);
    char *p = strtok(a, " ");
    while (p != NULL)
    {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }
}

int main()
{
    solve();
}