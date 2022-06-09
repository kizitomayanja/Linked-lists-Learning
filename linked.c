#include <stdio.h>
#include <string.h>

union family
{
    char firstName[20];
    int number;
    float ages;

};
struct test
{
        int age;
        char name[20];
};

int main()
{
    struct test *personPtr, person;
    personPtr = &person;

    printf("Enter the name of the person. ");
    scanf("%s", &personPtr->name);

    printf("Enter the age of the person");
    scanf("%d", &personPtr->age);

    printf("The name of the person is %s and the age is %d.", personPtr->name,personPtr->age);



    return 0;
}
