#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        char s[100], ho[10], b[100], *token;
        gets(s);
        int d = strlen(s);
        for (int i = 0; i < d; i++)
        {
            // if (s[i] >= 65 && s[i] <= 90)
            // {
            //     s[i] += 32;
            // }
            if (isalpha(s[i]))
                s[i] = tolower(s[i]);
        }
        int p = 0;
        int i;
        for (i = 0; i < d; i++)
        {
            if (isalpha(s[i]))
            {
                while (isalpha(s[i]))
                {
                    ho[p] = s[i];
                    p++;
                    i++;
                }
                break;
            }
        }
        // printf("%d", p);
        // int k = p;
        // int j = 0;
        // for (int i = k; i < d; i++)
        // {
        //     b[j] = s[i];
        //     j++;
        // }
        // ->>>
        strcpy(b, s + i);
        //
        token = strtok(b, " ");
        while (token != NULL)
        {
            *token = toupper(*token); // *token=token-32
            printf("%s ", token);
            token = strtok(NULL, " ");
        }
        printf(", ");
        for (int i = 0; i < p; i++)
        {
            printf("%c", toupper(ho[i]));
        }
        printf("\n");
    }
}