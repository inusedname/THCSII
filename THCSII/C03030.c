#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int n;
void IN(int a[])
{
    for (int i = 0; i < n; i++)
        printf("%d", a[i]);
    printf(" ");
}
void solve()
{
    scanf("%d", &n);
    if (n == 1)
        for (int i = 0; i < 10; i++)
            printf("%d ", i);
    else
    {
        int a[n];
        for (int i = 0; i < n; i++)
            a[i] = 1;
        IN(a);
        int j;
        while (1)
        {
            if (a[n - 1] == 9)
            {
                j = n - 1;
                while (a[j] == 9 && j > 0)
                    j--;
                a[j]++;
                if (a[0] == 10)
                    return;
                for (int z = j + 1; z < n; z++)
                    a[z] = a[j];
            }
            else
                a[n - 1]++;
            IN(a);
        }
    }
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