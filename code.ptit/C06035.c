#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char a[25];
    gets(a);
    int flag = 0;
    int i;
    for (i = 0; i < strlen(a) / 2; i++)
    {
        if (a[i] != a[strlen(a) - 1 - i])
        {
            if (flag == 0)
                flag = 1;
            else
            {
                printf("NO");
                return;
            }
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
        getchar();
        solve();
        printf("\n");
    }
}