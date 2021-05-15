#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
char a[50];
char mainans[500][50];
int freqans[500] = {0};
int u = 0;
void solve()
{
    char ans[5];
    gets(a);
    int dem = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = tolower(a[i]);
        if (isalpha(a[i]) && (a[i - 1] == ' ' || i == 0))
            dem++;
    }
    char *p = strtok(a, " ");
    for (int i = 0; i < dem - 1; i++)
    {
        ans[i] = p[0];
        p = strtok(NULL, " ");
    }
    ans[dem - 1] = '\0';
    strcpy(mainans[u], p);
    strcat(mainans[u], ans);
    u++;
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
    for (int i = 0; i < u; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (strcmp(mainans[i], mainans[j]) == 0)
                freqans[i]++;
        }
        if (freqans[i])
            freqans[i]++;
    }
    for (int i = 0; i < u; i++)
    {
        printf("%s", mainans[i]);
        if (freqans[i])
            printf("%d", freqans[i]);
        printf("@ptit.edu.vn\n");
    }
}