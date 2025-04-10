/*#include<stdio.h>
void prime(int number){
    int i,flag=0;
    for(i=2;i<number;i++){
     if(number%i==0){
        flag=1;
     }
   }
    if(flag==0){
        printf("\n%d is prime number",number);
    }
    else{
        printf("%d is not prime number", number);
    }
}
void armstrong(int digit){
    int i,remainder,count=0,temp,pow,sum=0;
    temp=digit;
    while(temp>0){
        temp=temp/10;
        count+=1;
    }
    temp=digit;

    while(temp>0){
        remainder=temp%10;
        pow=1;
        for(i=0;i<count;i++){
            pow=pow*remainder;
        }
        sum+=pow;
        temp=temp/10;
    }
    if(sum==digit){
        printf("\n%d is armstrong number",digit);
    }
    else{
        printf("\n%d is not armstrong",digit);
    }
}
void perfect(int num){
    int i,sum=0;
    for(i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("\n%d is perfect number",num);
    }
    else{
        printf("\n%d is not perfect number",num);
    }
}
void main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    prime(n);
    armstrong(n);
    perfect(n);
}
*/
#include <stdio.h>

int MAX_SIZE=100;

void insert(int arr[], int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position to insert.\n");
        return;
    }

    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    (*size)++;
}

void update(int arr[], int size, int position, int newValue) {
    if (position < 0 || position >= size) {
        printf("Invalid position to update.\n");
        return;
    }

    arr[position] = newValue;
}

void delete(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position to delete.\n");
        return;
    }

    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

void display(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int search(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position, newValue, searchElement, foundIndex;

    do {
        printf("\n1. Insert\n2. Update\n3. Delete\n4. Display\n5. Search\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position to insert: ");
                scanf("%d", &position);
                insert(arr, &size, element, position);
                break;
            case 2:
                printf("Enter position to update: ");
                scanf("%d", &position);
                printf("Enter new value: ");
                scanf("%d", &newValue);
                update(arr, size, position, newValue);
                break;
            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                delete(arr, &size, position);
                break;
            case 4:
                display(arr, size);
                break;
            case 5:
                printf("Enter element to search: ");
                scanf("%d", &searchElement);
                foundIndex = search(arr, size, searchElement);
                if (foundIndex != -1) {
                    printf("Element found at index %d\n", foundIndex);
                } else {
                    printf("Element not found in the array.\n");
                }
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}
