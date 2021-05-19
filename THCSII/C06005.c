#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
struct D
{
    char value[100];
    int freq;
};
int posi = 0;
void solve()
{
    char s[500];
    gets(s);
    for (int i = 0; i < strlen(s); i++)
        s[i] = tolower(s[i]);
    struct D a[500];
    char *p = strtok(s, " ");
    while (p != NULL)
    {
        int flag = 0;
        for (int i = 0; i < posi; i++)
            if (strcmp(a[i].value, p) == 0)
            {
                a[i].freq++;
                flag = 1;
                break;
            }
        if (flag == 0)
        {
            strcpy(a[posi].value, p);
            a[posi].freq = 1;
            posi++;
        }
        p = strtok(NULL, " ");
    }
    for (int i = 0; i < posi; i++)
        printf("%s %d\n", a[i].value, a[i].freq);
}

int main()
{
    solve();
}