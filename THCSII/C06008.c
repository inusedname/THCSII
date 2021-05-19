#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char s[101];
    gets(s);
    int p = 0;
    int flag;
    int mark;
    char ans[101][101];
    for (int i = 0; i < 101; i++)
        ans[i][0] = '\0';
    for (int i = 0; i < strlen(s); i++)
    {
        char tmp[51] = "\0";
        if (isalnum(s[i]) && (i == 0 || s[i - 1] == ' '))
        {
            for (int j = i; j < strlen(s); j++)
            {
                if (j == strlen(s) - 1)
                    mark = strlen(s);
                if (isalnum(s[j]))
                    tmp[j - i] = s[j];
                else
                {
                    mark = j;
                    break;
                }
            }
            flag = 0;
            for (int j = 0; j < p; j++)
                if (strcmp(tmp, ans[j]) == 0)
                {
                    flag = 1;
                    break;
                }
            if (flag == 0)
            {
                for (int j = 0; j < strlen(tmp); j++)
                    ans[p][j] = tmp[j];
                p++;
            }
            i = mark;
        }
    }
    for (int i = 0; i < p; i++)
        printf("%s ", ans[i]);
}
int main()
{
    solve();
}