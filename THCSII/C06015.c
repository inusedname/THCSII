#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char ho[10];
    char s[100];
    int p = 0;
    gets(s);
    for (int i = 0; i < strlen(s); i++)
        s[i] = tolower(s[i]);
    int i;
    for (i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
        {
            while (isalpha(s[i]))
            {
                ho[p] = s[i];
                p++;
                i++;
            }
            break;
        }
    }
    char a[100];
    int p2 = 0;
    int flag = 0;
    for (; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
        {
            if (flag)
                a[p2++] = s[i];
            else
                a[p2++] = toupper(s[i]);
            flag = 1;
        }
        else if (flag == 1)
        {
            a[p2++] = ' ';
            flag = 0;
        }
    }
    if (a[p2 - 1] == ' ')
        a[p2 - 1] = '\0';
    else
        a[p2] = '\0';
    printf("%s", a);
    printf(", ");
    for (int i = 0; i < p; i++)
        printf("%c", toupper(ho[i]));
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