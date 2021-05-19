#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
typedef long long ll;
typedef double db;
int dem = 0;
int n;
void in(int a[])
{
    printf("Buoc %d: ", dem++);
    for (int i = 0; i < dem; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int kt(int a[])
{
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            return 0;
    return 1;
}
void solve()
{
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    in(a);
    int j;
    for (int i = 1; i < n; i++)
    {
        int tmp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > tmp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
        in(a);
        if (kt(a))
            return;
    }
}

int main()
{
    solve();
}