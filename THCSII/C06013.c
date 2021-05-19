#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    int f[10] = {0};
    char s[1005];
    gets(s);
    if (s[0] == '0')
    {
        printf("INVALID");
        return;
    }
    for (int i = 0; i < strlen(s); i++)
        if (isdigit(s[i]))
            f[s[i] - '0'] = 1;
        else
        {
            printf("INVALID");
            return;
        }
    for (int i = 0; i < 10; i++)
        if (!f[i])
        {
            printf("NO");
            return;
        }

    printf("YES");
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