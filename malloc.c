#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num,*ptr;

printf("Enter the number of elements");
scanf("%d", &num);
ptr=malloc(num*sizeof(int));
for(i=0;i<num;i++)
{
    ptr[i]=i+1;
}

for(i=0;i<num;i++)
{
    printf("%d \t", ptr[i]);
}


    return 0;
}
