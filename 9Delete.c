//ANKIT KUMAR -> 2331079
//09. WAP to delete an element in an unsorted Array
#include <stdio.h>
void deleteElement(int arr[], int *size, int element) {
    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (arr[i] == element) {
            found = 1;      
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array. Cannot delete.\n", element);
    }
}
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[5] = {5, 3, 8, 2, 7};
    int size = 5;
    printf("Before Deletion:\n");
    displayArray(arr, size);
    deleteElement(arr, &size, 8);
    printf("After Deletion:\n");
    displayArray(arr, size);
    return 0;
}