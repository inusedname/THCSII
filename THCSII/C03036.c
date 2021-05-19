#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char a[20];
    gets(a);
    if (strlen(a) % 2)
    {
        for (int i = 0; i < strlen(a) / 2; i++)
        {
            if ((a[i] - '0') % 2 != 0)
            {
                if (a[i] != a[strlen(a) - 1 - i])
                {
                    printf("NO");
                    return;
                }
            }
            else
            {
                printf("NO");
                return;
            }
        }
        printf("YES");
    }
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