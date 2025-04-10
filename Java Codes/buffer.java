import java.util.Scanner;
// public class buffer{
//     public static void main(String []args){
//         // StringBuffer sb = new StringBuffer("Hello");
//         // StringBuffer sb = new StringBuffer(50);
//         StringBuffer sb = new StringBuffer("Hello World");
//         sb.append("Hello");
//         System.out.println(sb);

//         sb.insert(6,"Java");
//         System.out.println(sb.capacity()); //by default, it is 16, but as we add content in line 3, it will increase acordingly
//         System.out.println(sb.length());
//         System.out.println(sb.toString());

//     }
// }

// public class buffer{
//     public static void main(String []args){
//         StringBuffer sb = new StringBuffer("Hello World");
//         // sb.delete(6,12);
//         // sb.reverse();
//         sb.replace(6,11,"Java");
//         System.out.println(sb.toString());

//     }
// }


class buffer {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();
        String[] words = input.split(" ");
        StringBuilder result = new StringBuilder();
        for (String word : words) {
            StringBuffer rev = new StringBuffer(word);
            rev.reverse();
            result.append(rev).append(" ");
        }
        System.out.println("Reversed Words: " + result.toString().trim());
        scanner.close();
    }
}