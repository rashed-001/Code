#include<stdio.h>
#include<math.h>
int isRight(char *ch1, char *ch2)
{
    if ((abs(*ch1 - *ch2) <= 1) && (*ch1 + *ch2 != '5' + '0'))
        return 1;
    else
        return 0;
}
int main()
{
    int T,i;
    scanf("%d",&T);
   for(i=0;i<T;i++)
    {
          int k = 0, l = 0, n;
        scanf("%d",&n);
        getchar();
        char first[140] = {0};
        char second[140] = {0};
        gets(first);
        gets(second);
        while (first[k] != '\0')
        {
            if (first[k] == ' ')
                while (second[l] != '\0')
                {
                    if (second[l] == ' ')
                    {
                        if (isRight(first + k - 1, second + l - 1))
                        {
                            printf("NO\n");
                            goto end;
                        }
                        l++;
                        break;
                    }
                    l++;
                }
            k++;
        }
        while (second[l] != '\0')
            l++;
        if ((first[k - 1] >= '3') && second[l - 1] <= '2')
            printf("YES\n");
        else
            printf("NO\n");
    end:;
    }
    return 0;
}