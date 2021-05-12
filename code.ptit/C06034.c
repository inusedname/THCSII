#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int cv(char a)
{
    if (a == 'I')
        return 1;
    if (a == 'V')
        return 5;
    if (a == 'X')
        return 10;
    if (a == 'L')
        return 50;
    if (a == 'C')
        return 100;
    if (a == 'D')
        return 500;
    if (a == 'M')
        return 1000;
}
void solve()
{
    char s[50];
    gets(s);
    int sum = 0;
    int i = 0;
    for (i = 0; i < strlen(s) - 1; i++)
    {
        if (cv(s[i]) >= cv(s[i + 1]))
            sum += cv(s[i]);
        else
            sum += cv(s[i + 1]) - cv(s[i++]);
    }
    if (i == strlen(s) - 1)
        sum += cv(s[i]);
    printf("%d", sum);
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