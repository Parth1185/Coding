// class Animal{
//     public void eat(){
//         System.out.println("All animals eat");
//     }
// }

// class Dog extends Animal{
//     public void bark(){
//         System.out.println("Bhow Bhow");
//     }
// }

// class Inheritance{
//     public static void main(String[] args){
//         Dog d1 = new Dog();
//         d1.eat();
//         d1.bark();
//     }
// }

import java.util.Scanner;

class Marks{
    private int phy;
    private int chem;

    public Marks(){
        System.out.println("Default Marks");
    }

    public Marks(int phy, int chem){
        this.phy = phy;
        this.chem = chem;
    }

    Scanner sc = new Scanner(System.in);
    public void input(){
        phy = sc.nextInt();
        chem = sc.nextInt();
    }
    public void display(){
        System.out.println("Physics : " + phy + "\nChemistry : " + chem);
    }
}

class Student extends Marks{
    private String name;
    private int roll;
    private int phy;
    private int chem;

    public Student(){
        System.out.println("Default Student");
    }
    public Student(int roll, String name, int phy, int chem){
        super(phy,chem);        //can call both constructros and function   //super should be first statement
        this.roll = roll;
        this.name = name;
    }

    public void input1(){
        roll = sc.nextInt();
        name = sc.nextLine();
        super.input();
    }
    public void display1(){
        System.out.println(roll + " : " + name);
        super.display();
    }
}


class Inheritance{
    public static void main(String[] args){
        
        Student s1 = new Student();
        Student s2 = new Student(101, "Kartik", 95, 99);
        
        s1.display1();
        s2.display1();
    }
}