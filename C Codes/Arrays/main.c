/*#include <stdio.h>
void main()
{
    int arr[5] , i;
    printf("Enter array elements : ");
    for(i=0; i<5; i++)
    {
        scanf("%d" , &arr[i]);
        //arr[i] *= 2;

    }
    for (i=0; i<5; i++)
    {
        //printf("%d ", arr[i]);
        printf("%d ", arr[i]*2);
    }
 }

#include <stdio.h>
void main()
{
    int arr[5] , i,j;
    printf("Enter array elements : ");
    for(i=0; i<5; i++)
    {
        scanf("%d" , &arr[i]);
        for(j=2; j<=6; j++)
        {
            arr[i] += j;
        }

    }
    for (i=0; i<5; i++)
    {printf("%d ", arr[i]);}
}

 #include <stdio.h>

int main() {
    int arr[5], i, n, found = 0;

    // Input: Read 5 integers from the user
    printf("Enter array elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: Read the element to search
    printf("Enter the number to search: ");
    scanf("%d", &n);

    // Search for the element in the array and print all occurrences
    printf("Occurrences of %d: ", n);
    for (i = 0; i < 5; i++) {
        if (n == arr[i]) {
            printf("%d ", i);
            found = 1;
        }
    }

    // If no occurrences found, print "Not Found"
    if (found == 0) {
        printf("Not Found");
    }

    printf("\n");

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    char letter;
    int count = 0, i;

    // Input: Read a sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Input: Read the letter to search for
    printf("Enter the letter to count occurrences: ");
    scanf("%c", &letter);

    // Count occurrences of the letter in the sentence
    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == letter || sentence[i] == letter + 32 || sentence[i] == letter - 32) {
            count++;
        }
    }

    // Output: Print the number of occurrences
    printf("Occurrences of '%c' in the sentence: %d\n", letter, count);

    return 0;
}


 #include<stdio.h>
 void main()
 {
    int arr[10][10], r,c, i,j,n, f=0;
    printf("Enter no. of rows : ");
    scanf("%d",&r);
    printf("Enter no. of columns : ");
    scanf("%d",&c);
    printf("Enter array elements : ");
    for (i=0 ; i<r; i++)
        {
        for(j=0;j<c;j++)
        {
         scanf("%d", &arr[i][j]);
        }
        }
        for (i=0 ; i<r; i++)
        {
        for(j=0;j<c;j++)
        {
         printf("%d ", arr[i][j]);
        }
        }
    printf("Enter an element to search : ");
    scanf("%d", &n);
    for (i=0 ; i<r; i++) {
        for(j=0;j<c;j++)
        {
            if (n==arr[i][j])
            {
                printf("Element found at row %d and column %d\n", i,j);
                f = 1;
                }}}
                if (f==0){
                    printf("Not Found");
                }
        }

#include<stdio.h>
int main() {
    int r, c, i, j;
    printf("Enter no. of rows: ");
    scanf("%d", &r);
    printf("Enter no. of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter array elements:\n");
    for (i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int b[c][r];
    for (i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            b[i][j] = arr[j][i];
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
void fn(int arr[], int n)
{
    int j;
    printf("\nInside Function\n ");
    for(j=0; j<n; j++)
    {
        printf("%d\n", arr[j]);
    }
}
void main()
{
    int a[10],n,i;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    printf("Enter Array Elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    fn(a,n);
    printf("\nAfter Function");
}*/

#include <stdio.h>
void fn(int *b, int size) {
    int j;
    printf("\nInside Function\n ");
    for(j = 0; j < size; j++) {
        printf("\n%d", *(b + j));
    }
}
int main() {
    int a[10], n, i;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    printf("Enter Array Elements : \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    fn(a, n);
    printf("\nAfter Function\n");
    return 0;
}

