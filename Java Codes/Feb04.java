// class Demo {
//     private final int a;
//     private final int b = 10;
//     private int c = 1;

//     public Demo(){
//         a=100;
//         // b=200;    //error, b is already initialised
//         c=300;
//     }

//     // public void setA(int a){     //ERROR
//     //     this.a = a;
//     // }

//     // public void setB(int b){     //ERROR
//     //     this.b = b;
//     // }

//     public void setC(int c){
//         this.c = c;
//     }

//     public void display(){
//         System.out.println("a = " + a + "\nb = " + b + "\nc = " + c + "\n");
//     }
// }

// class Feb04 {
//     public static void main(String[] args) {
//         Demo d1 = new Demo();
//         d1.display();
//         d1.setC(152);
//         d1.display();
//     }
// }


// final class : We can not inherit it
// final methods : we can not override it

// class Student{
//     private int roll;
//     private String name;

//     public Student(int r, String n){
//         roll = r;
//         name = n;
//     }

//     public void display(){
//         System.out.println(roll + " : " + name);
//     }
// }

// class Feb04{
//     public static void main(String[] args) {
//         Student s1 = new Student(101, "Rohan");
//         final Student s2 = new Student(102, "Soham");

//         s1 = new Student(103, "Sanjay");
//         // s2 = new Student(104,"Dhananjay");  //error, cant be changed

//         s1.display();
//         s2.display();

//     }
// }


    //STATIC 
    // 1. static variable : belong to class and 1 instance is shared

// class Demo{
//     private int a = 0;
//     private static int b = 0;

//     public Demo(){
//         a++;
//         b++;
//     }

//     public void setA(int a){
//         this.a = a;
//     }

//     public void setB(int b){
//         this.b = b;
//     }

//     public void display(){
//         System.out.println(a + " , " + b);
//     }
// }

// class Feb04{
//     public static void main(String[] args) {
//         Demo d1 = new Demo();
//         Demo d2 = new Demo();
//         Demo d3 = new Demo();

//         d1.display();
//         d2.display();
//         d3.display();

//         d2.setB(20);
        
//         d1.display();
//         d2.display();
//         d3.display();
//     }
// }

//static methods: can be called using class name, accessed only inside static class, generally used for static functions

// class Mathutility{
//     public static int sum(int a, int b){
//         return a+b;
//     }

//     public static int mult(int a, int b){
//         return a*b;
//     }

//     public int diff(int a, int b){
//         return a-b;
//     }

//     public static int avg(int a, int b){
//         int s = sum(a,b);
//         return s/2;
//     }

//     public int add(int a, int b){
//         return a+b;
//     }

//     public static int mean(int a, int b){
//         int a = add(a,b);
//         return a/2;
//     }
// }

// class Feb04{
//     public static void main(String[] args) {
        
//         int sum = Mathutility.sum(10,20);
//         System.out.println(sum);
//         System.out.println(Mathutility.mult(10,20));

//         Mathutility m1 = new Mathutility();
//         int x=  m1.sum(15,85);
//         System.out.println(x);
        
//         System.out.println(m1.diff(20,10));

//         System.out.println(Mathutility.avg(20,10));
//         // System.out.println(Mathutility.mean(50,30)); //error
//     }
// }

    //STATIC BLOCK: executes as soon as class loads to memory, runs only once, can be used for initialising sttaic variables

    // class Demo{
    //     private static int x;

    //     public void demo(){
    //         System.out.println(x);
    //         System.out.println("Demo funcion executed");
    //     }
        
    //     static{
    //         x=10;
    //         System.out.println("Static Block Executed");
    //     }
    // }

    // class Feb04{
    //     public static void main(String[] args) {
    //         Demo d1 = new Demo();
    //         d1.demo();
    //     }
    // }

    class Outer{
        private int a = 10;
        static class Inner{
            public void display(){
                System.out.println(a);
            }
        }
    }

    class Feb04 {
        public static void main(String[] args) {
            Outer.Inner inr = new Outer.Inner();
            inr.display();
        }
    }