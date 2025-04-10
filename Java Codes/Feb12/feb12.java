// interface Ia {

//     abstract void disp();

//     default void defaultDemo() {
//         System.out.println("Demo of default method in an interface.");
//     }

//     static void staticDemo() {      //static function can never be override
//         System.out.println("Demo of static method in an interface.");
//     }

// }

// class Demo implements Ia{
//     public void disp(){
//         System.out.println("Overridden disp()");
//     }
// }

// class feb12 {
//     public static void main(String[] args) {
//         Demo d1 = new Demo();
//         d1.disp();
//         d1.defaultDemo();
//         Ia.staticDemo();

//     }
// }

//FUNCTIONAL INTERFACE

// @FunctionalInterface
// interface Ib{
//         abstract void sum(int a , int b);
// }

// class feb12{
//         public static void main(String[] args) {
//                 Ib obj = (a,b)->{
//                         System.out.println(a+b);
//                 };

//                 obj.sum(10,20);
//         }
// }


// interface Ic{
//                 abstract void avg(int a , int b, int c);
//         }


// class feb12 {
//         public static void main(String[] args) {
//         Ic obj = (a,b,c) -> {
//                 int sum = a+b+c;
//                         System.out.println(sum/3);
//                 };

//                 obj.avg(10, 20, 30);
//         }
// }



//1.
// interface Animal {
//     void makeSound();
// }
// class Dog implements Animal {
//     public void makeSound() {
//         System.out.println("Woof!");
//     }
// }
// class Cat implements Animal {
//     public void makeSound() {
//         System.out.println("Meow!");
//     }
// }



//2.
// abstract class Vehicle {
//    abstract void start();

//    void stop() {
//         System.out.println("Vehicle is stopping.");
//     }
// }

// interface Engine {
//     void engineType();
// }

// class Car extends Vehicle implements Engine {
//     public void start() {
//         System.out.println("Car is starting...");
//     }

//     public void engineType() {
//         System.out.println("Car has a petrol engine.");
//     }
// }




//3.
// interface Person {
//     void speak();
// }
// interface Student extends Person {
//     void study();
// }
// class CollegeStudent implements Student {
//     public void speak() {
//         System.out.println("College student is speaking.");
//     }

//     public void study() {
//         System.out.println("College student is studying.");
//     }
// }




//4.
// interface Flyable {
//     void fly();
// }

// interface Swimmable {
//     void swim();
// }

// class Duck implements Flyable, Swimmable {
//     @Override
//     public void fly() {
//         System.out.println("Duck is flying.");
//     }

//     @Override
//     public void swim() {
//         System.out.println("Duck is swimming.");
//     }
// }




//5.
// interface Logger {
//     void log(String message);

//     default void info(String msg) {
//         System.out.println("[INFO]: " + msg);
//     }

//     static void error(String msg) {
//         System.out.println("[ERROR]: " + msg);
//     }
// }

// class ConsoleLogger implements Logger {
//     @Override
//     public void log(String message) {
//         System.out.println("[LOG]: " + message);
//     }
// }



//6.
// interface Calculator {
//     int add(int a, int b);
// }

class feb12 {
    public static void main(String[] args) {
        // Animal dog = new Dog();
        // Animal cat = new Cat();

        // dog.makeSound(); 
        // cat.makeSound(); 


        // Car myCar = new Car();
        // myCar.start();      
        // myCar.engineType();  
        // myCar.stop();  


        // CollegeStudent student = new CollegeStudent();
        // student.speak();  
        // student.study();  


        // Duck duck = new Duck();
        // duck.fly();
        // duck.swim();


        // ConsoleLogger logger = new ConsoleLogger();
        // logger.log("Application started.");
        // logger.info("System is running smoothly.");
        // Logger.error("An error occurred.");


        // Calculator sum = (a, b) -> a + b;
        // System.out.println("Sum: " + sum.add(5, 10));





    }
}