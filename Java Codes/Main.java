// import java.util.Scanner;

// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         int arr[] = new int[n];

//         // Reading the array elements
//         for (int i = 0; i < n; i++) {
//             arr[i] = sc.nextInt();
//         }

//         int se = sc.nextInt(); // Element to search

//         boolean found = false; // Flag to track if the element is found

//         // Loop to search for the element and print all occurrences
//         for (int i = 0; i < n; i++) {
//             if (se == arr[i]) {
//                 System.out.println(se + " is at index " + i);
//                 found = true; // Set flag to true if element is found
//                 break;
//             }
//         }

//         // If element is not found, print "F of!!"
//         if (!found) {
//             System.out.println("No !!!");
//         }

//         sc.close(); // Close the scanner to prevent resource leak
//     }
// }

       

// public class Main {
//     public static void main(String[] args) {
//         Integer num = Integer.valueOf(10);
//         int val = num.intValue();
//         System.out.println(val);
//     }
// }

// class Student {
//     String name;
//     int age;

//     // Constructor with name only
//     Student(String name) {
//         this.name = name;
//         age = 18; // Default age
//     }

//     // Constructor with both name and age
//     Student(String name, int age) {
//         this.name = name;
//         this.age = age;
//     }

//     void display() {
//         System.out.println("Student: " + name + ", Age: " + age);
//     }
// }

// public class Main {
//     public static void main(String[] args) {
//         Student s1 = new Student("Alice");  // Calls the first constructor
//         Student s2 = new Student("Bob", 22);  // Calls the second constructor

//         s1.display();
//         s2.display();
//     }
// }



// class Animal {
//     Animal(){
//         System.out.println("This animal eats food.");
//     }
//     // void eat() {
//         // System.out.println("This animal eats food.");
//     // }
// }

// class Mammal extends Animal {
//     Mammal(){
//         System.out.println("This mammal breathes air.");
//     }
//     // void breathe() {
//         // System.out.println("This mammal breathes air.");
//     // }
// }

// class Dog extends Mammal {
//     Dog(){
//         System.out.println("The dog barks.");
// }
//     // void bark() {
//         // System.out.println("The dog barks.");
//     // }
// }

// public class Main {
//     public static void main(String[] args) {
//         Dog d = new Dog();
//         // d.eat();    // From Animal
//         // d.breathe(); // From Mammal
//         // d.bark();   // From Dog
//     }
// }


// interface A {
//     void methodA();
// }

// interface B {
//     void methodB();
// }

// class C implements A, B {
//     public void methodA() {
//         System.out.println("Method A from interface A");
//     }

//     public void methodB() {
//         System.out.println("Method B from interface B");
//     }
// }

// public class Main {
//     public static void main(String[] args) {
//         C obj = new C();
//         obj.methodA();
//         obj.methodB();
//     }
// }

// class Parent {
//     void show() {
//         System.out.println("Parent class method");
//     }
// }

// class Child extends Parent {
//     void show() {
//         super.show(); // Calls Parent class method
//         System.out.println("Child class method");
//     }
// }

// public class Main {
//     public static void main(String[] args) {
//         Child c = new Child();
//         c.show();
//     }
// }


// class Bank {
//     double getInterestRate() {
//         return 0;
//     }
// }

// class SBI extends Bank {
//     @Override
//     double getInterestRate() {
//         return 5.4;
//     }
// }

// class HDFC extends Bank {
//     @Override
//     double getInterestRate() {
//         return 6.2;
//     }
// }

// public class Main {
//     public static void main(String[] args) {
//         Bank b1 = new SBI();
//         Bank b2 = new HDFC();

//         System.out.println("SBI Interest Rate: " + b1.getInterestRate() + "%");
//         System.out.println("HDFC Interest Rate: " + b2.getInterestRate() + "%");
//     }
// }

class Parent {
    void show() {
        System.out.println("Parent class method.");
    }
}

class Child extends Parent {
    @Override
    void show() {
        System.out.println("Child class method.");
    }
}

public class Main {
    public static void main(String[] args) {
        Parent obj = new Child(); // Superclass reference to subclass object
        // Parent obj = new Parent();
        obj.show(); // Calls Child's show() method (dynamic method dispatch)
    }
}

