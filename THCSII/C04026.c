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
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                flag = 1;
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        if (flag)
        {
            printf("Buoc %d: ", i + 1);
            for (int j = 0; j < n; j++)
                printf("%d ", a[j]);
            printf("\n");
        }
    }
}

int main()
{
    solve();
}