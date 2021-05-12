#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char c = 'a';
    int tmp;
    int n = 0;
    int sochan = 0;
    while (c != '\n')
    {
        scanf("%d", &tmp);
        scanf("%c", &c);
        n++;
        if (tmp % 2 == 0)
            sochan++;
    }
    if ((n % 2 == 0 && sochan > n - sochan) || (n % 2 && sochan < n - sochan))
        printf("YES");
    else
        printf("NO");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        // getchar();
        solve();
        printf("\n");
    }
}