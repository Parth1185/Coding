import java.util.Scanner;


abstract class Marks {
    private int phy;
    private int chem;
    Scanner sc = new Scanner(System.in);

    public abstract void demo();

    // Method to input marks
    public void inputM() {
        System.out.print("Enter physics and chemistry marks : ");
        phy = sc.nextInt();
        chem = sc.nextInt();
    }

    // Method to display marks
    public void dispM() {
        System.out.println("Physics: " + phy + " , Chemistry: " + chem);
    }
}

// class Temp extends jan28_1 {
//     // Implementing the abstract method demo
//     public void demo() {
//         System.out.println("Just a demo");
//     }
    
//     // Main method to test the functionality
//     public static void main(String[] args) {
//         Temp temp = new Temp();
//         temp.inputM();  // Get user input for marks
//         temp.displayM();  // Display the input marks
//         temp.demo();  // Display the demo message
//     }
// }

class Jan29{
    public static void main(String[] args) {
        Marks marks = new Marks(){
            public void demo(){
                System.out.println("Just a demo");
            }
        };  
        marks.inputM();
        marks.dispM();    
        marks.demo();
    }
}