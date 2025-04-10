// class Student{
//     private String name;
//     int roll;
//     double marks;

//     void display(){
//         System.out.println(roll + " : " + name + " = " + marks);
//     }

//     String getName(){
//         return name;
//     }
    
//     void setName(String name){
//         this.name = name;
//     }
// }

// class practice {
//     public static void main(String[] args) {
//         Student s1 = new Student();
//         s1.setName("Kartik");
//         s1.roll = 1001;
//         s1.marks = 98;
//         s1.getName();
//         s1.display();
//     }
// }

// class Car{
//     String brand;
//     String model;
//     double price;

//     Car(){
//         brand = null;
//         model = null;
//         price = 0.0;
//     }

//     Car(String b, String m, double p){
//         brand = b;
//         model = m;
//         price = p;
//     }
    
//     void display(){
//         System.out.println(brand +  " : " + model + " : " + price);
//     }
// }

// class practice {
//     public static void main(String[] args) {
//         Car c1 = new Car();
//         Car c2 = new Car("Toyota", "Fortuner", 5000000);

//         c1.display();
//         c2.display();
//     }   
// }

// class Book{
//     String title;
//     String author;
//     double price;



//     Book(String title, String author, double price){
//         this.title = title;
//         this.author = author;
//         this.price = price;
//     }

//     Book(Book abc){
//         this.title = abc.title;
//         this.author = abc.author;
//         this.price = abc.price;
//     }
    
//     void display(){
//         System.out.println(title +  " : " + author + " : " + price);
//     }
// }

// class practice {
//     public static void main(String[] args) {
//         Book b1 = new Book("Heartstopper", "Alice Oseman", 1000);
//         Book b2 = new Book(b1);
//         Book b3 = b1;
//         b1.display();
//         b2.display();
//         b3.display();
//     }   
// }


// class Singleton{
//     static Singleton var;

//     private Singleton(){

//     }

//     static Singleton method1(){
//         if (var == null) {
//             var = new Singleton();
//             return var;
//         }
//         else{
//             return var;
//         }
//     }
//     }


// class practice{
//     public static void main(String[] args) {
//         // Singleton s1 = new Singleton();
//        Singleton obj1 =  Singleton.method1();
//        Singleton obj2 = Singleton.method1();
//        System.out.println(obj1 == obj2);
        
//     }
// }


// class myClass{
//     static int count = 0;

//     myClass(){
//         count++;
//     }
// }

// class practice{
//     public static void main(String[] args) {
//         myClass ob1 = new myClass();
//         // myClass ob2 = new myClass();

//         System.out.println("Total objects : " + myClass.count);
//     }
// }

// class Date {
//     private int day;
//     private int month;

//     public Date(int day, int month) {
//         this.day = day;
//         this.month = month;
//     }

//     @Override
//     public String toString() {
//         return String.format("%02d/%02d", day, month);
//     }
// }
// class Year{
//         private int day;
//         private int month;
//         private int year;
    
//         public Year(int day, int month, int year) {
//             this.day = day;
//             this.month = month;
//             this.year = year;
//         }
    
//         @Override
//         public String toString() {
//             return String.format("%02d/%02d/%04d", day, month, year);
//         }
    
// }
// class practice{
//     public static void main(String[] args) {
//         Date date = new Date(11,8);
//         Year year = new Year(11,8,2005);
    
//         System.out.println(date); // Output: 05/07
//         System.out.println(year);
//     }
// }

// Abstract class Animal
// abstract class Animal {
//     String name; // Instance variable

//     // Constructor
//     Animal(String name) {
//         this.name = name;
//         System.out.println(name + " is created");
//     }

//     // Abstract method (must be implemented by subclasses)
//     abstract void makeSound();

//     // Concrete method
//     void eat() {
//         System.out.println(name + " is eating...");
//     }

//     // Static method in abstract class
//     static void showMessage() {
//         System.out.println("Animals exist in the world!");
//     }

//     // Final method (cannot be overridden)
//     final void sleep() {
//         System.out.println(name + " is sleeping...");
//     }
// }

// // Concrete class Dog that extends Animal
// class Dog extends Animal {
//     // Constructor
//     Dog(String name) {
//         super(name); // Call the constructor of Animal
//     }

//     // Implementing the abstract method
//     void makeSound() {
//         System.out.println(name + " barks");
//     }
// }

// // Concrete class Cat that extends Animal
// class Cat extends Animal {
//     // Constructor
//     Cat(String name) {
//         super(name);
//     }

//     // Implementing the abstract method
//     void makeSound() {
//         System.out.println(name + " meows");
//     }
// }

// // Main class
//  class practice {
//     public static void main(String[] args) {
//         // Calling static method from abstract class
//         Animal.showMessage();

//         // Creating objects of subclasses
//         Dog dog = new Dog("Buddy");
//         Cat cat = new Cat("Whiskers");

//         // Calling implemented methods
//         dog.makeSound(); // Output: Buddy barks
//         cat.makeSound(); // Output: Whiskers meows

//         // Calling concrete method from abstract class
//         dog.eat(); // Output: Buddy is eating...
//         cat.eat(); // Output: Whiskers is eating...

//         // Calling final method (cannot be overridden)
//         dog.sleep(); // Output: Buddy is sleeping...
//         cat.sleep(); // Output: Whiskers is sleeping...
//     }
// }


// class BankAccount{
//     int accNo;
//     double balance;

//     void deposit(int amt){
//         balance += amt;
//         System.out.println("Deposited Rs. " + amt + " successfuly...");
//         System.out.println("Updated Balance =  Rs. " + balance);
//     }

//     BankAccount(){
//         accNo = 15150;
//         balance = 0.0;
//     }
// }

// class Saving extends BankAccount{
    
//     @Override
//     public void deposit(int amt){
//         System.out.println();
//         super.deposit(amt);
        
//         Double intr = 0.0;
//         if (amt>10000) {
//              intr = 2.0/100 * amt;
//         }
//         balance += intr;
//         System.out.println("Updated Balance after adding an interest of Rs. " + intr + " is Rs. " + balance);
//         System.out.println();
//     }

// }

// class Current extends BankAccount{
//     void deposit(int amt){
//         super.deposit(amt);
//         balance -= 50;
//         System.out.println("Deducting Rs. 50 as Service Charge..... \nUpdated Balance after deducting Service Charge :  Rs. " + balance);
//         System.out.println();
//     }
// }


// class practice{
//     public static void main(String[] args) {
//         Saving s1 = new Saving();
//         Current c1 = new Current();

//         s1.deposit(15000);
//         c1.deposit(8000);
//     }
// }

// class practice {
//     public static void main(String[] args) {
//     Integer x = 100;
//     Integer y = 100;
//     Integer z = 200;
//     Integer w = 200;
//     System.out.println(x == y);
//     System.out.println(z == w);
//     }
//     }


    //KAPREKAR NUMBER
    
// import java.util.Scanner;

// class practice{
//     static boolean kn(int n){
//         if(n==1) return true;
//         int sq = n*n;
//         String strsq = String.valueOf(sq);
//         int len = strsq.length();

//         for(int i=1;i<len;i++){

//             int left = Integer.parseInt(strsq.substring(0, i));
//             int right = Integer.parseInt(strsq.substring(i));

//             if(right>0 && (left + right ==n)) return true;
//         }
//         return false;
//     }

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();

//         if(kn(n)) System.out.println("YES");
//         else System.out.println("NO");
//     }
// }