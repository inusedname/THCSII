#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char c[20];
        gets(c);
        int flag = 1;
        for (int i = 0; i < strlen(c) / 2; i++)
            if (c[i]!=c[strlen(c)-1-i])
            {
                flag = 0;
                break;
            }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
}