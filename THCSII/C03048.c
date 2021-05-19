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
    int demchan = 0;
    int demle = 0;
    for (int i = 0; i < strlen(s); i++)
        if ((s[i] - '0') % 2)
            demle++;
        else
            demchan++;
    // ((s[strlen(s) - 1] - '0') % 2 && demle > demchan) ||
    if ((s[strlen(s) - 1] - '0') % 2 && demle > demchan)
        printf("YES");
    else
    {
        printf("NO");
    }
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