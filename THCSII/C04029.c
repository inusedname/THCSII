#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;

void solve()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int step = 1;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int flag = 1;
    while (flag == 1)
    {
        flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
                flag = 1;
            }
        }
        if (flag)
        {
            printf("Buoc %d: ", step++);
            for (int i = 0; i < n; i++)
                printf("%d ", a[i]);
            printf("\n");
        }
    }
}

int main()
{
    solve();
}