#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char s[20];
    gets(s);
    int i;
    for (i = 0; i < strlen(s) - 2; i++)
    {
        if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
        {
            i += 3;
            break;
        }
        printf("%c", s[i]);
    }
    for (; i < strlen(s); i++)
        printf("%c", s[i]);
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