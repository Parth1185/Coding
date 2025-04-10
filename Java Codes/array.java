import java.util.Scanner;

// class array{
//     public static void main(String args[]){

//         Scanner input = new Scanner(System.in);
//         System.out.print("Enter no. of elements : ");
//         int n = input.nextInt();
//         System.out.print("Enter " + n + " array elements : ");
//         int[] arr = new int[n];
        
//         for(int i=0;i<arr.length;i++)
//         {
//             arr[i] = input.nextInt();
//         }

//         for(int i : arr)
//         {
//             System.out.print(i + " ");
//         }
//     }
// }

// class array{
//     public static void main(String args[]){

//         Scanner input = new Scanner(System.in);
//         System.out.print("Enter no. of rows and columns : ");
//         int r = input.nextInt();
//         int c = input.nextInt();
//         System.out.print("Enter " + r*c + " array elements : ");
//         int[] arr[] = new int[r][c];
        
//         for(int i=0;i<arr.length;i++)
//         {
//             for(int j=0;j<c;j++)
//             {
//                 arr[i][j] = input.nextInt();
//             }
//         }

//         for(int i=0;i<arr.length;i++)
//         {
//             for(int j=0;j<arr[0].length;j++)
//             {
//                 System.out.print(arr[i][j] + " ");
//             }
//             System.out.println();
//         }
//     }
// }


// class array{
//     public static void main(String args[]){

//         Scanner input = new Scanner(System.in);
//         System.out.print("Enter no. of elements : ");
//         int n = input.nextInt();
//         System.out.print("Enter " + n + " array elements : ");
//         float[] arr = new float[n];
//         float sum = 0;
        
//         for(int i=0;i<arr.length;i++)
//         {
//             arr[i] = input.nextFloat();
//             sum +=arr[i];
//         }
//         System.out.print("Sum of the elements = " + sum);  
//     }
// }

// class array{
//     public static void main(String args[]){

//         Scanner input = new Scanner(System.in);

//         int arr[][] = new int [4][];
//         arr[0] = new int[3];
//         arr[1] = new int[2];
//         arr[2] = new int[4];
//         arr[3] = new int[1];

//         System.out.print("Enter elements : ");
//         for(int i=0;i<arr.length; i++)
//         {
//             for(int j=0;j<arr[i].length; j++)
//             {
//                 arr[i][j] = input.nextInt();
//             }
//         }

//         for(int i[] : arr)
//         {
//             for(int j : i)
//             {
//                 System.out.print(j + " ");
//             }
//             System.out.println();
//         }

//     }
// }

// class array{
//     public static void main(String args[]){
//         Scanner input = new Scanner(System.in);
//         System.out.print("Enter no. of elements : ");
//         int n = input.nextInt();
//         System.out.print("Enter " + n + " array elements : ");
//         int[] arr = new int[n];
        
//         for(int i=0;i<arr.length;i++)
//         {
//             arr[i] = input.nextInt();
//         }

//         int max=arr[0], min = arr[0];
//         int sec_lar = arr[0];

//         for (int ele : arr) {
//             if (ele > max) {
//                 sec_lar = max;
//                 max = ele;
//             }
//              else if (ele > sec_lar && ele < max) {
//                 sec_lar = ele; 
//             }
//         }
  
//         System.out.println("Max : " + max + ", Min : " + min + ", Second Largest : " + sec_lar);
//     }
// }

class array{
    public static void main(String args[]){

        Scanner input = new Scanner(System.in);
        System.out.print("Enter no. of elements : ");
        int n = input.nextInt();
        System.out.print("Enter " + n + " array elements : ");
        int[] arr = new int[n];
        
        for(int i=0;i<arr.length;i++)
        {
            arr[i] = input.nextInt();
        }

        System.out.print("Enter element to find : ");
        int e = input.nextInt();

        int i;
        int index=0;
        for( i =0; i<arr.length; i++)
        {
            if(arr[i]==e){
                break;
            }
        }
        
        // if (i < arr.length) {
        //     System.out.println("Element found at index " + i);
        // } else {
        //     System.out.println("Element not found!! " + i);
        // }

        //or

        if (index ==-1) {
            System.out.println("Element not found!! " + i);
        } 
        else {
            System.out.println("Element found at index " + i);
        }
    }
}