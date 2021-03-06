#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n;i++)
        scanf("%d", &a[i]);
    int flag = 1;
    for (int i = 0; i < n;i++)
    {
        while (flag==1)
        {
            flag = 0;
            for (int j = i; j < n - 1; j++)
            {
                
                if (a[j]>a[j+1])
                {
                    flag = 1;
                    int tmp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tmp;
                }
            }
        }
    }
    for (int i = 0; i < n;i++)
        printf("%d ", a[i]);
}