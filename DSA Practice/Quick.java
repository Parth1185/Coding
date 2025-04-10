import java.util.Scanner;

public class Quick {

    // Function to take input
    public static void input(int[] arr, int n, Scanner scanner) {
        System.out.println("Enter elements: ");
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



    // Partition function (Lomuto Partition Scheme)
    public static int partition(int[] arr, int start, int end) {
        int pivot = arr[start];  // Choosing the first element as pivot
        int i = start + 1;
        int j = end;

        while (i < j) {
            while (i <= end && arr[i] < pivot) i++;
            while (j > start && arr[j] > pivot) j--;
            if (i < j) {
                swap(arr, i, j);
            }
        }
        swap(arr, start, j);  // Swap pivot with partition point
        return j;
    }

    // Function to perform QuickSort
    public static void quickSort(int[] arr, int start, int end) {
        if (start >= end) return;
        int mid = partition(arr, start, end);
        quickSort(arr, start, mid - 1);
        quickSort(arr, mid + 1, end);
    }

    // Utility function to swap elements
    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];

        input(arr, n, scanner);
        quickSort(arr, 0, n - 1);
        
        System.out.println("Sorted Array:");
        display(arr, n);

        scanner.close();
    }
}
