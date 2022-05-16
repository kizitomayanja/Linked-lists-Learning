#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *ptr,sum=0;
    printf("Enter the number of values to be added");
    scanf("%d",&num);
    ptr=calloc(num,sizeof(int));



    for(int i=0;i<num;i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("\n\n %d is the total.", sum);

    return 0;
}
