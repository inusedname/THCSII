#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    char a[25];
    gets(a);
    int flag = 0;
    int left = 0;
    int right = strlen(a) - 1;
    while (left < right)
    {
        if (a[left] != a[right])
        {
            if (flag)
            {
                printf("NO");
                return;
            }
            if (a[left + 1] == a[right])
            {
                flag = 1;
                left++;
            }
            else if (a[left] == a[right - 1])
            {
                flag = 1;
                right--;
            }
            else
                flag = 1;
        }
        left++;
        right--;
    }
    printf("YES");
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