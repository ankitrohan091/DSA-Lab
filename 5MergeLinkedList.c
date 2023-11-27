//ANKIT KUMAR -> 2331079
//05. WAP to merge two Linked List
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head1, *head2;
struct node *createLinkedList(int length);
void displayLinkedList(struct node *);
void concatenete(struct node *head1, struct node *head2);
struct node *merge(struct node *head1, struct node *head2);
int main()
{
    printf("----- Firstly, You need to create two Linked List -----\n");
    printf("\nEnter the number of nodes in Linked List 1 : ");
    int length;
    scanf("%d", &length);
    while (length <= 0)
    {
        printf("Please Specify the possible size of Linked List : ");
        scanf("%d", &length);
    }
    head1 = createLinkedList(length);
    printf("\n----- Linked created of %d nodes ------ \n", length);
    displayLinkedList(head1);
    printf("\nEnter the number of nodes in Linked List 2 : ");
    int length2;
    scanf("%d", &length2);
    while (length2 <= 0)
    {
        printf("Please Specify the possible size of Linked List : ");
        scanf("%d", &length2);
    }
    head2 = createLinkedList(length2);
    printf("\n----- Linked created of %d nodes ------ \n", length2);
    displayLinkedList(head2);
    struct node *newHead = NULL;
    newHead = merge(head1, head2);
    printf("\n----- After merge these two linked list, the nodes and its data are ----- \n");
    displayLinkedList(newHead);
    return 0;
}
struct node *createLinkedList(int length)
{
    struct node *head = (struct node *)(malloc(sizeof(struct node)));
    if (head == NULL)
    {
        printf("Memory cannot be alloted because of Heap Overflow...\n");
    }
    else
    {
        printf("Enter data for node 1 : ");
        int num;
        scanf("%d", &num);
        head->data = num;
        head->next = NULL;
        struct node *temp1 = NULL;
        temp1 = (struct node *)(malloc(sizeof(struct node)));
        if (temp1 == NULL)
        {
            printf("Memory cannot be alloted because of Heap Overflow...\n");
        }
        else
        {
            temp1 = head;
            for (int i = 2; i <= length; i++)
            {
                struct node *temp2 = NULL;
                temp2 = (struct node *)(malloc(sizeof(struct node)));
                if (temp2 == NULL)
                {
                    printf("Memory cannot be alloted because of Heap Overflow...\n");
                }
                else
                {
                    printf("Enter data for node %d : ", i);
                    scanf("%d", &num);
                    temp2->data = num;
                    temp2->next = NULL;
                    temp1->next = temp2;
                    temp1 = temp2;
                }
            }
        }
    }
    return head;
}
void displayLinkedList(struct node *head)
{
    struct node *temp3 = NULL;
    if (head == NULL)
    {
        printf("List is Empty!..\n");
    }
    else
    {
        temp3 = head;
        int count = 1;
        while (temp3 != NULL)
        {
            printf("Data at Node %d : %d\n", count, temp3->data);
            count++;
            temp3 = temp3->next;
        }
    }
}
struct node *merge(struct node *head1, struct node *head2)
{
    struct node *newHead = NULL, *temp3 = NULL;
    struct node *temp1 = head1;
    struct node *temp2 = head2;
    if (temp1->data < temp2->data)
    {
        newHead = temp1;
        temp3 = newHead;
        temp1 = temp1->next;
    }
    else
    {
        newHead = temp2;
        temp3 = newHead;
        temp2 = temp2->next;
    }
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            temp3->next = temp1;
            temp1 = temp1->next;
        }
        else
        {
            temp3->next = temp2;
            temp2 = temp2->next;
        }
        temp3 = temp3->next;
    }
    if (temp1 != NULL)
    {
        temp3->next = temp1;
    }
    else
    {
        temp3->next = temp2;
    }
    return newHead;
}