#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int dem = 1;
void solve()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
            if (b[i] < b[j])
            {
                int tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    int p = 0;
    printf("Test %d:\n", dem++);
    while (p < n)
    {
        printf("%d %d ", a[p], b[p]);
        p++;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        getchar();
        solve();

        printf("\n");
    }
}