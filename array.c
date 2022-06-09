#include <stdio.h>

int main()
{
    int n,j,stop;
    int num[]={67,89,23,43,12,56};
    printf("Enter the number you want to  delete: ");
    scanf("%d", &n);

    for(j=0;j<6;j++)
    {
        if(num[j]==n)
        {
            stop=j;
            break;
        }

    }printf("%d\n\n", j);

        while(j<6)
    {
        num[j]=num[j+1];
        if(j==5)
        {
            num[5]=0;
            break;
        }
        j++;
    }


    for(int i=0;i<6;i++)
    {
        printf("%d\t\a", num[i]);
    }
    return 0;
}
