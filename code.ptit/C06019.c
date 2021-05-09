#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char a[55];
    gets(a);
    for (int i = 0; i < strlen(a); i++)
        a[i] = tolower(a[i]);
    int i = 0;
    char tmp;
    while (!isalpha(a[i]))
        i++;
    printf("%c", a[i]);
    i++;
    for (; i < strlen(a); i++)
    {
        if (a[i] != ' ' && a[i - 1] == ' ')
        {
            while (!isalpha(a[i]))
                i++;
            printf("%c", tmp);
            tmp = a[i];
        }
    }
    i = strlen(a) - 1;
    while (a[i] == ' ')
    {
        i--;
    }
    for (; i >= 0; i--)
    {
        if (a[i] == ' ')
        {
            i++;
            // while (!isalpha(a[i]))
            //     i++;
            while (i != strlen(a))
                printf("%c", a[i++]);
            break;
        }
    }
    printf("@ptit.edu.vn");
}

int main()
{
    solve();
}