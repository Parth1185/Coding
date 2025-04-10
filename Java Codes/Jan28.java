//  class Jan28 {
//     public static void main(String[] args) {
//         int[] arr = {1, 3, 10, 4, 7, 9};
//         int n = arr.length;

//         // Edge case: If there are fewer than 2 elements, no second largest exists
//         if (n < 2) {
//             System.out.println("Second Largest: N/A");
//             return;
//         }

//         int lar = arr[0];
//         int slar = -1;  // Initialize slar to a very low value, assuming all elements are positive

//         // Loop through the array to find largest and second largest
//         for (int i = 1; i < n; i++) {
//             if (arr[i] > lar) {
//                 slar = lar;  // Update second largest before updating the largest
//                 lar = arr[i];  // Update largest
//             } else if (arr[i] > slar && arr[i] != lar) {  // Ensure it's not equal to largest
//                 slar = arr[i];  // Update second largest
//             }
//         }

//         System.out.println("Largest: " + lar);
//         System.out.println("Second Largest: " + slar);
//     }
// }

// class Jan28 {
//     public static void main(String[] args) {
//         int arr[] = {9,8,7,6,5,4,3,2,1};
//         int n = arr.length;
//         int copy[] = new int [n];

//         for(int i = 0; i<n; i++){
//             copy[i] = arr[i];
//         }

//         for(int i:arr){
//             System.out.print(i + " ");
//         }
//         System.out.println();
//         for(int i:copy){
//             System.out.print(i + " ");
//         }
//     }
    
// }

// Java program to add two matrices
class Jan28 {
    public static void main(String[] args) 
    {
        // Input matrices
        int A[][] = { { 1, 2 }, { 3, 4 } };
        int B[][] = { { 5,6 }, { 6+1, 8 } };

        // Dimensions of the matrix
        int rows = A.length;
        int cols = A[0].length;

        // Resultant matrix to store the sum
        int sum[][] = new int[rows][cols];

        // Adding two matrices
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum[i][j] = A[i][j] + B[i][j];
            }
        }

        // Printing the resultant matrix
        System.out.println("Resultant Matrix:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
              
                // Print elements on the same line
                System.out.print(sum[i][j] + " ");
            }
            // Move to the next line after printing each row
            System.out.println();
        }
    }
}
