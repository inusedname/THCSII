#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    int n;
    char s1[220], s2[220], s[420];
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        scanf("%s%s%s", s1, s2, s);
        char ans1[220], ans2[220];
        strncpy(ans1, s, n);
        ans1[n] = '\0';
        strcpy(ans2, s + n);
        // printf("%s\n%s\n", ans1, ans2);
        char tmp1[220], tmp2[220];
        tmp1[n] = '\0';
        tmp2[n] = '\0';
        int step = 0;
        while (step <= 500)
        {
            if (strcmp(s1, ans1) == 0 && strcmp(s2, ans2) == 0)
                break;
            int p1 = 0, p2 = 0, i = 0;
            while (1)
            {
                tmp1[i++] = s2[p2++];
                if (i == n)
                    break;
                tmp1[i++] = s1[p1++];
                if (i == n)
                    break;
            }
            i = 0;
            if (p2 > p1)
            {
                tmp2[i++] = s1[p1++];
            }
            while (1)
            {
                tmp2[i++] = s2[p2++];
                if (i == 2 * n)
                    break;
                tmp2[i++] = s1[p1++];
                if (i == 2 * n)
                    break;
            }
            step++;
            strcpy(s1, tmp1);
            strcpy(s2, tmp2);
        }
        if (step > 500)
            printf("-1\n");
        else
            printf("%d\n", step);
    }
}

int main()
{
    solve();
}