#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("%c", '@' + 2 * j);
        for (char j = '@' + (2 * i) - 2; j >= '@'; j -= 2)
            printf("%c", j);
        printf("\n");
    }
}

int main()
{
    solve();
}