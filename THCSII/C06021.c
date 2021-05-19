#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char s[1001];
    gets(s);
    if (s[0] == '0')
    {
        printf("INVALID");
        return;
    }
    for (int i = 0; i < strlen(s); i++)
        if (isalpha(s[i]))
        {
            printf("INVALID");
            return;
        }
    int chusochan = 0;
    for (int i = 0; i < strlen(s); i++)
        if ((s[i] - '0') % 2 == 0)
            chusochan++;
    if ((chusochan > strlen(s) - chusochan && strlen(s) % 2 == 0) || (chusochan < strlen(s) - chusochan && strlen(s) % 2))
        printf("YES");
    else
        printf("NO");
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