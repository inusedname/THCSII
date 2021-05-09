#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char a[20];
    scanf("%s", a);
    int freq[10] = {0};
    for (int i = 0; i < strlen(a); i++)
        if (a[i] == '2' || a[i] == '3' || a[i] == '5' || a[i] == '7')
            freq[a[i] - '0']++;
    for (int i = 0; i < strlen(a); i++)
        if (freq[a[i] - '0'])
        {
            printf("%d %d\n", a[i] - '0', freq[a[i] - '0']);
            freq[a[i] - '0'] = 0;
        }
}

int main()
{
    solve();
}