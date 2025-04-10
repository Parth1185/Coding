import java.util.Scanner;

public class merge {

    // Function to take input
    public static void input(int[] arr, int n, Scanner scanner) {
        System.out.println("Enter Elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
    }

    // Function to display the array
    public static void display(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    // Merge function to merge two sorted halves
    public static void merge(int[] arr, int left, int mid, int right) {
        int[] temp = new int[right - left + 1];  // Temporary array
        int i = left, j = mid + 1, k = 0;

        // Merge elements from both halves
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
            }
        }

        // Copy remaining elements from left half
        while (i <= mid) {
            temp[k++] = arr[i++];
        }

        // Copy remaining elements from right half
        while (j <= right) {
            temp[k++] = arr[j++];
        }

        // Copy sorted elements back into the original array
        for (i = 0; i < temp.length; i++) {
            arr[left + i] = temp[i];
        }
    }

    // Recursive Merge Sort function
    public static void mergeSort(int[] arr, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2; // Avoids overflow
            mergeSort(arr, left, mid);      // Sort left half
            mergeSort(arr, mid + 1, right); // Sort right half
            merge(arr, left, mid, right);   // Merge the two halves
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];

        input(arr, n, scanner);
        mergeSort(arr, 0, n - 1);

        System.out.println("Sorted Array:");
        display(arr, n);

        scanner.close();
    }
}
