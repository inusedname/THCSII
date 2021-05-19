#include <stdio.h>
int a[100];
int Ktra(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        if (a[i] > a[i + 1])
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int dem = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Buoc 0: %d\n", a[0]);
    for (int i = 1; i < n; i++)
    {
        int ViTri = i;
        int ok = 0;
        while (ViTri > 0 && a[ViTri] < a[ViTri - 1])
        {
            int t = a[ViTri];
            a[ViTri] = a[ViTri - 1];
            a[ViTri - 1] = t;
            ViTri--;
            ok = 1;
        }
        printf("Buoc %d: ", dem);
        dem++;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
        if (Ktra(a, 0, n - 1))
            return 0;
    }
}