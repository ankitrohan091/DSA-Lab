//ANKIT KUMAR -> 2331079
//13. WAP to reverse a Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
} *head;
void createLinkedList(int length){
    if (length > 0){
        printf("Enter data for node 1 : ");
        int num;
        scanf("%d", &num);
        head = (struct node *)malloc(sizeof(struct node));
        if (head == NULL){
            printf("Memory cannot be alloted. Heap Overflow...\n");
        }
        else{
            head->data = num;
            head->next = NULL;
            struct node *temp;
            temp = head;
            for (int i = 2; i <= length; i++){
                struct node *temp2;
                temp2 = (struct node *)(malloc(sizeof(struct node)));
                if (temp2 == NULL){
                    printf("Memory cannot be alloted. Heap Overflow...\n");
                }
                else{
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
    printf("-----Showing Data -----\n\n");
    struct node *temp3;
    if (head == NULL){
        printf(" List is empty.");
    }
    else{
        temp3 = head;
        int count = 1;
        while (temp3 != NULL){
            printf("Data at node %d = %d\n", count, temp3->data);
            count++;             // prints the data of current node
            temp3 = temp3->next; // advances the position of current node
        }
    }
}
void reverseLinkedList(){
    struct node *next = NULL;
    struct node *prev = NULL;
    while (head != NULL){
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    head = prev;
    printf("\nSuccessfully Reversed...\n");
}
int main(){
    printf("\n\nLinked List : To Create Singly Linked List :-\n");
    printf("-------------------------------------------------------------\n");
    printf("Enter the number of nodes : ");
    int length;
    scanf("%d", &length);
    createLinkedList(length);
    printf("Before Reversing the Linked List : \n");
    displayLinkedList();
    printf("After Reversing the Linked List : \n");
    reverseLinkedList();
    displayLinkedList();
    return 0;
}