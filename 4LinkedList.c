//ANKIT KUMAR -> 2331079
//04. WAP to implement Linked List operations
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head;
void createLinkedList(int length);
void beginInsert();
void lastInsert();
void displayLinkedList();
void randomInsert();
void beginDelete();
void lastDelete();
void randomDelete();
void search();
void reverseLinkedList();
int main()
{
    printf("\n\nLinked List : To Create Singly Linked List :-\n");
    printf("-------------------------------------------------------------\n");
    printf("Enter the number of nodes : ");
    int length;
    scanf("%d", &length);
    createLinkedList(length);
    int choice = 0;
    while (choice != 10)
    {
        printf("\n********Main Menu********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert in begining of Linked List\n2.Insert at last\n3.Insert at any random"
               " location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node at specified "
               "location\n7.Search for an element\n8.Show\n9.To reverse a Linked List\n10.Exit\n");
        printf("\nEnter your choice to perform : ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            beginInsert();
            break;
        case 2:
            lastInsert();
            printf("\nSuccessfully Insertd...\n");
            break;
        case 3:
            randomInsert();
            break;
        case 4:
            beginDelete();
            break;
        case 5:
            lastDelete();
            break;
        case 6:
            randomDelete();
            break;
        case 7:
            search();
            break;
        case 8:
            displayLinkedList();
            break;
        case 9:
            reverseLinkedList();
            break;
        case 10:
            printf("Successfully exited...\n\n");
            exit(0);
        default:
            printf("Please Select correct choice...\n");
        }
    }
    return 0;
}
void createLinkedList(int length)
{
    if (length > 0)
    {
        printf("Enter data for node 1 : ");
        int num;
        scanf("%d", &num);
        head = (struct node *)malloc(sizeof(struct node));
        if (head == NULL)
        {
            printf("Memory cannot be alloted. Heap Overflow...\n");
        }
        else
        {
            head->data = num;
            head->next = NULL;
            struct node *temp;
            temp = head;
            for (int i = 2; i <= length; i++)
            {
                struct node *temp2;
                temp2 = (struct node *)(malloc(sizeof(struct node)));
                if (temp2 == NULL)
                {
                    printf("Memory cannot be alloted. Heap Overflow...\n");
                }
                else
                {
                    printf("Enter data for node %d : ", i);
                    scanf("%d", &num);
                    temp2->data = num;
                    temp2->next = NULL;
                    temp->next = temp2;
                    temp = temp->next;
                }
            }
        }
        printf("\nData entered in the list... \n");
    }
}

void displayLinkedList()
{
    printf("-----Showing Data -----\n\n");
    struct node *temp3;
    if (head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        temp3 = head;
        int count = 1;
        while (temp3 != NULL)
        {
            printf("Data at node %d = %d\n", count, temp3->data);
            count++;             // prints the data of current node
            temp3 = temp3->next; // advances the position of current node
        }
    }
}

void beginInsert()
{
    struct node *temp4 = NULL;
    temp4 = (struct node *)(malloc(sizeof(struct node)));
    if (temp4 == NULL)
    {
        printf("Memory cannot be alloted. Heap Overflow...\n");
    }
    else
    {
        printf("Enter value which you want to insert at begining : ");
        int num;
        scanf("%d", &num);
        temp4->data = num;
        temp4->next = head;
        head = temp4;
        printf("\nSuccessfully Inserted...\n");
    }
}

void lastInsert()
{
    struct node *temp5 = head;
    while (temp5->next != NULL)
    {
        temp5 = temp5->next;
    }
    struct node *lastNode = (struct node *)(malloc(sizeof(struct node)));
    if (lastNode == NULL)
    {
        printf("Memory cannot be alloted. Heap Overflow...\n");
    }
    else
    {
        temp5->next = lastNode;
        printf("Enter value for last node : ");
        int num;
        scanf("%d", &num);
        lastNode->data = num;
        lastNode->next = NULL;
    }
}

void randomInsert()
{
    struct node *temp6 = head;
    printf("Enter the  node number at which you want to insert data : ");
    int locate;
    scanf("%d", &locate);
    struct node *randomNode = (struct node *)(malloc(sizeof(struct node)));
    if (randomNode == NULL)
    {
        printf("Memory cannot be alloted. Heap Overflow...\n");
    }
    else
    {
        for (int i = 1; i < locate - 1; i++)
        {
            temp6 = temp6->next;
            if (temp6 == NULL)
            {
                printf("\n----- Can't Insert because linked list have only %d nodes -----\n", i);
                return;
            }
        }
        if (locate == 1)
        {
            randomNode->next = head;
            head = randomNode;
        }
        else if (locate == 0)
        {
            printf("\n---- Can't Insert(Node starts from 1) ----\n");
            return;
        }
        else
        {
            randomNode->next = temp6->next;
            temp6->next = randomNode;
        }
        printf("Enter the value for insert at node number %d : ", locate);
        int num;
        scanf("%d", &num);
        randomNode->data = num;
        printf("\nSuccessfully Insertd...\n");
    }
}
void beginDelete()
{
    head = head->next;
    printf("\nSuccessfully Deleted the first Node...\n");
}
void lastDelete()
{
    struct node *temp = head;
    struct node *temp2 = head;
    if (temp == NULL)
    {
        printf("List is already empty\n");
    }
    else if (temp->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nSuccessfully deleted last node...\n");
    }
    else
    {
        while (temp->next != NULL)
        {
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = NULL;
        free(temp);
        printf("\n Successfully deleted last node...\n");
    }
}
void randomDelete()
{
    struct node *temp1 = head, *temp2;
    printf("Enter node number to delete : ");
    int locate;
    scanf("%d", &locate);
    if (locate == 1)
    {
        head = head->next;
        printf("\nSuccessfully deleted node number %d...\n", locate);
    }
    else if (locate == 0)
    {
        printf("\n---- Can't Delete(Node starts from 1) ----\n");
    }
    else
    {
        for (int i = 1; i <= locate - 1; i++)
        {
            temp2 = temp1;
            temp1 = temp1->next;
            if (temp1 == NULL)
            {
                printf("\n---- Can't Delete because linked list have only %d nodes ----\n", i);
                return;
            }
        }
        temp2->next = temp1->next;
        free(temp1);
        printf("\nSuccessfully deleted node number %d...\n", locate);
    }
}
void search()
{
    printf("Enter number to search in the linked list : ");
    int num;
    scanf("%d", &num);
    struct node *temp = head;
    int count = 1;
    while (temp != NULL)
    {
        if (temp->data == num)
        {
            printf("\n%d is found at node %d in Linked List...\n", num, count);
            return;
        }
        else
        {
            temp = temp->next;
            count++;
        }
    }
    printf("\n%d is not available in the Linked List...\n", num);
}
void reverseLinkedList()
{
    struct node *next = NULL;
    struct node *prev = NULL;
    while (head != NULL)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    head = prev;
    printf("\nSuccessfully Reversed...\n");
}