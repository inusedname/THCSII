#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char a[1000];
    gets(a);
    int i, dem = 0;
    for (int i = 0; i < strlen(a); i++)
        a[i] = tolower(a[i]);
    for (int i = 0; i < strlen(a); i++)
        if (isalpha(a[i]) && (a[i - 1] == ' ' || i == 0))
            dem++;
    for (i = 0; i < strlen(a); i++)
        if (isalpha(a[i]) && (a[i - 1] == ' ' || i == 0))
        {
            printf("%c", a[i]);
            dem--;
            if (dem == 1)
                break;
        }
    for (i = i + 1; i < strlen(a); i++)
    {
        if (isalpha(a[i]) && a[i - 1] == ' ')
        {
            for (; i < strlen(a); i++)
            {
                if (isalnum(a[i]))
                    printf("%c", a[i]);
            }
            break;
        }
    }
    printf("@ptit.edu.vn");
}

int main()
{
    solve();
}