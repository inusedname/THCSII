#include <stdio.h>
int nto(int n)
{
    if (n < 4)
        return n > 1;
    else if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i = i + 6)
        //Tất cả các số nguyên tố đều có dạng 6k+-1
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
    // độ phức tạp O(sqrt(n)/6) -> không đáng kể
}
int main()
{
    int t;
    scanf("%d",&t);
    int dem = 0;
    int i = 2;
    while (dem<t)
    {
        if (nto(i))
        {    
            printf("%d\n",i);
            dem++;
        }
        i++;
    }
}