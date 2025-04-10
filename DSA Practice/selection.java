// import java.util.Scanner;

//  class selection {

//     // Function to take input
//     public static void input(int[] arr, int n, Scanner scanner) {
//         System.out.println("Enter Elements: ");
//         for (int i = 0; i < n; i++) {
//             arr[i] = scanner.nextInt();
//         }
//     }

//     // Function to display array elements
//     public static void display(int[] arr, int n) {
//         for (int i = 0; i < n; i++) {
//             System.out.print(arr[i] + " ");
//         }
//         System.out.println();
//     }

//     // Selection Sort Implementation
//     public static void selectionSort(int[] arr, int n) {
//         for (int i = 0; i < n; i++) {
//             int minIndex = i;  // Assume the current element is the smallest

//             // Find the index of the minimum element in the remaining array
//             for (int j = i + 1; j < n; j++) {
//                 if (arr[j] < arr[minIndex]) {
//                     minIndex = j;  // Update minIndex if a smaller element is found
//                 }
//             }

//             // Swap arr[i] and arr[minIndex]
//             int temp = arr[i];
//             arr[i] = arr[minIndex];
//             arr[minIndex] = temp;
//         }
//     }

//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);

//         // Input array size
//         System.out.print("Enter number of elements: ");
//         int n = scanner.nextInt();
//         int[] arr = new int[n];

//         // Input array elements
//         input(arr, n, scanner);

//         // Sorting the array
//         selectionSort(arr, n);

//         // Display sorted array
//         System.out.println("Sorted Array: ");
//         display(arr, n);

//         scanner.close();
//     }
// }


