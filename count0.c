#include <stdio.h>
int main()
{
    int a;
    printf("Enter your no\n");
    scanf("%d", &a);
    int b[a];
    int i;
    int ccount = 0;
    int dcount = 0;
    printf("enter no");

    for (i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
        if (b[i] == 0)
        {

            ccount = ccount + 1;
        }
        else if (b[i] == 1)
        {
            dcount = dcount + 1;
        }
        else{
        printf("invalid no"); 
        a=a+1;   
        }
    }
    for (int i = 1; i <= ccount; i++)
    {
        printf("0");
    }

    for (int i = 1; i <= dcount; i++)
    {
        printf("1");

    }

    return 0;
}