import java.util.Scanner;

public class insert {

    // Method to take input from the user
    public static void input(int[] arr, int n, Scanner scanner) {
        System.out.print("Enter elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
    }

    // Method to display the array
    public static void display(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    // Method to perform Insertion Sort
    public static void insertionSort(int[] arr, int n) {
        int key, j;
        for (int i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;

            // Shift elements to the right to create space for the key
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];

        input(arr, n, scanner);

        insertionSort(arr, n);
        
        System.out.println("Sorted array:");
        display(arr, n);

        scanner.close();
    }
}
