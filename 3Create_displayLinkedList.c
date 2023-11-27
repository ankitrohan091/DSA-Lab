//ANKIT KUMAR -> 2331079
//03.WAP to create and display a Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*head;
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
void displayLinkedList(){
    struct node* temp=head; 
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main() {
    printf("Enter the length of Linked List to create : ");
    int n;
    scanf("%d",&n);
    createLinkedList(n);
    displayLinkedList();
    return 0 ;
}