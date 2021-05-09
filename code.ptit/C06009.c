#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char s[30];
    gets(s);
    int flag = 1;
    int a[5];
    a[0] = s[6] - '0';
    a[1] = s[7] - '0';
    a[2] = s[8] - '0';
    a[3] = s[10] - '0';
    a[4] = s[11] - '0';
    int flaginc = 0;
    int flagdec = 0;
    int flagconst = 0;
    for (int i = 0; i < 4; i++)
    {
        if (a[i] > a[i + 1])
            flagdec = 1;
        if (a[i] < a[i + 1])
            flaginc = 1;
        if (a[i] == a[i + 1])
            flagconst = 1;
    }
    if (flagdec == 0 && ((flaginc == 1 && flagconst == 0) || (flaginc == 0 && flagconst == 1)))
    {
        printf("YES");
        return;
    }
    if (a[0] == a[1] && a[1] == a[2] && a[3] == a[4])
    {
        printf("YES");
        return;
    }
    for (int i = 0; i < 5; i++)
    {
        if (!(a[i] == 6 || a[i] == 8))
        {
            printf("NO");
            return;
        }
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