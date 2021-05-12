#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char a[90];
    gets(a);
    for (int i = 0; i < strlen(a); i++)
        a[i] = tolower(a[i]);
    for (int i = 0; i < strlen(a); i++)
        if (isalpha(a[i]))
        {
            printf("%c", toupper(a[i]));
            int j;
            for (j = i + 1; j < strlen(a); j++)
                if (isalpha(a[j]))
                    printf("%c", a[j]);
                else
                {
                    break;
                }
            printf(" ");
            i = j;
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