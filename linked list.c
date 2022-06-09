#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int value;
    struct node *next;

};

void bubble_sort(struct node *head_ref, int direction)
{
    struct node *current = head_ref;
    struct node *index =NULL;
    int temp;

    if(current == NULL)
    {
        return;
    }
    else
    {
         while(current != NULL)
    {
        index = current->next;
        while(index != NULL)
        {
            if(direction == 1)
            {
                if(current->value > index->value)
                {
                    temp = current->value;
                    current->value = index->value;
                    index->value= temp;
                }
                index = index->next;
            }
            else if(direction == 0)
            {
                if(current->value < index->value)
                {
                    temp = current->value;
                    current->value = index->value;
                    index->value= temp;
                }
                index = index->next;
            }

        }
        current = current->next;
    }

    }

}
void printlinkedlist(struct node *p)
{
    int i=1;
    while(p != NULL)
    {
        printf("Value %d: %d\n",i, p->value);
        p = p->next;
        i++;
    }
};

bool searchNode(struct node *head_ref, int key)
{
    struct node* current = head_ref;

    while(current != NULL)
    {
        if(current->value==key) return true;
        current=current->next;
    }
    return false;
}

int main()
{
    struct node *head, *one,*two,*three;//Declaring first elements of list.
    one = malloc(sizeof(struct node));/*Allocating memory... Memory in this case is very
                                        important for the pointers do not hold any memory*/
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one->value =1;//setting the value variable... In other words, giving each element data to hold.
    two->value = 2;
    three->value = 3;

    one->next = two;//linking the next pointers in the order of the linked list.
    two->next = three;
    three->next= NULL;

    head = one;//linking the head pointer to the very first item in the list.
    printlinkedlist(head);//printing linked list

putchar('\n');
    struct node *temp;//code to add a new item to the start of the list.
    temp = malloc(sizeof(struct node));
    temp->value=7;
    temp->next=head;
    head = temp;
    printlinkedlist(head);
putchar('\n');

    struct node *newNode;// Adding an item to the end of the list.
    newNode = malloc(sizeof(struct node));
    newNode->value = 8;
    newNode->next = NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    printlinkedlist(head);

putchar('\n');
    struct node *secondNode;
    secondNode=malloc(sizeof(struct node));
    secondNode->value=12;
    temp=head;
    for(int i=2;i<4;i++)
    {
        if(temp!=NULL)
        {
            temp = temp->next;
        }
    }
    //printf("\n\n%d",temp->value);
    secondNode->next=temp->next;
    temp->next =secondNode;
    printlinkedlist(head);

    printf("\n");
    head = head->next;//deleting an item from the beginning.
    printlinkedlist(head);
    putchar('\n');

    temp=head;//Deleting from middle
    for(int i=2;i<3;i++)
    {
        if(temp!=NULL)
        {
            temp = temp->next;
        }
    }
    temp->next= temp->next->next;
    printlinkedlist(head);

    putchar('\n');//deleting an item from the end
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = NULL;
    printlinkedlist(head);
    int n;
    printf("\nEnter the value you are searching for...: ");
    scanf("%d",&n);
    int answer = searchNode(head,n);
    if(answer)
    {
        printf("\n%d exists in the linked list.",n);
    }
    else if(!answer)
    {
        printf("\n%d does not exist... sorry",n);
    }
    printf("\nWhat order would you like to sort the linked list into. \n1. Ascending...\n2.Descending...  ");
    int direction;
    scanf("%d", &direction);
    bubble_sort(head, direction);
    printlinkedlist(head);



    return 0;
}
