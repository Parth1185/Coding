import java.lang.*;   
import java.io.*;
import java.util.Scanner;

//package that is added by default, * means to import all functionalities in the package
// public class Dec4 {
//     public static void main(String[]args){
//         int totalScore = 100;
//         final int MAX_SCORE = 200;

//         System.out.println("Total Score : " + totalScore);
//     }
// }

// public class Dec4 {
//     public static void main(String[]args){
//         float a = 10.13f;
//         double b = 20.18;
//         double c = a * b;

//         System.out.println(c);
//     }
// }

// public class Dec4 {
//     public static void main(String[]args){
//         char ch1,ch2,ch3,ch4;
//         ch1='A';
//         ch2='B';
//         ch3=65;
//         System.out.println("Values of ch1 ch2 ch3 are : " + ch1 + " " + ch2 + " " + ch3);
//         ch1++;
//         ch4=ch1;
//         int a = ch1+ch2;
//         System.out.println("Values of ch4 and a are : " + ch4 + ", " + a);
//     }
// }


        //TYPE CASTING
    //narrowing, widening
    //type promotion

// class Dec4{
//     public static void main(String args[])
//     {
//         int a = 12;
//         int b = 25;
//         int c = a|b;
//         int d = a&b;
//         int e = a^b;        //XOR

//         int num = 35, result;
//         result =   ~num;       //bitwise complement

//         int num1=8, num2 = -8;

//         int largest = (a>b)?a:b;
//         // System.out.println(c);
//         // System.out.println(d);
//         // System.out.println(e);
//         // System.out.println(result);  //-36

//         System.out.println(num1>>2);
//         System.out.println(num2>>2);

//         System.out.println(largest);

//     }
// }

//Wrapper class: used to wrap(convert) a primitive type to object type

// class Dec4{
//     public static void main(String args[]){
//         Integer a = 20;
//         int b = a.intValue();
//         Float c = 12.23f;
//         float d = c.floatValue();

//         // System.out.println(b +" "+  c);
//     }
// }


// class Dec4{
//     public static void main(String args[]){
//         int a = 20;
//         Integer b = new Integer(a);     //boxing
//         int c = b.intValue();       //unboxing  //unwrapping ho rahi hai
//         System.out.println("a = " + a + ", b = " + b + ", c = " + c);


//     }
// }


// //Object class is the parent class, all classes inherit it.

// Object class
// class Dec4 extends Object{  //it is present by default, either it be written or not, both will work in same way
//     public static void main(String args[]){
//         // int a = 20;
//         // Integer b = a;     //auto-boxing
//         // int c = b;       //auto-unboxing      
//         // System.out.println("a = " + a + ", b = " + b + ", c = " + c);

//         // String a = "10", c="10", s1 = "true";
//         // a=a+2;
//         // int b = Integer.parseInt(c);
//         // b=b+2;
//         // boolean b1 = Boolean.parseBoolean(s1);          //only char does not have parse method
//         // System.out.println(a);
//         // System.out.println(b);
//         // System.out.println(b1);

//         // String s1 = "110", s2 = "12.23";
//         // int a = Integer.parseInt(s1);
//         // double b = Double.parseDouble(s2);
//         // double sum = a+b;
//         // System.out.println(sum);

//         // PrintStream pr = System.out;
//         // pr.println(sum);
//         // }
// }

/*  3 methods for input
1. console class readLine()
step1- import java.io package
step2- create object of console class
step3- call readLine() method

Console con = System.console();
String data = con.readLine("msg");
or 
String data = System.console().readLine("msg"); //merges in a single line

//NOTE : readLine() method is only for string!!
*/


// class Dec4{
//     public static void main(String args[]){
//         String n1 = System.console().readLine("Enter first number : ");
//         String n2;
//         int a = Integer.parseInt(n1);
//         int b = Integer.parseInt(System.console().readLine("Enter second number : "));
//         int sum = a + b;
//         System.out.println("Sum is : " + sum);
//     }
// }

// class Dec4{
//     public static void main(String args[]){
//         String name = System.console().readLine("Enter Name : ");
//         int age = Integer.parseInt(System.console().readLine("Enter Age : "));
//         String city = System.console().readLine("Enter City : ");
//         double marks = Double.parseDouble(System.console().readLine("Enter Marks : "));

//         System.out.println("Hi, I am " + name);
//         System.out.println("I am " + age + " years old.");
//         System.out.println("I am from " + city);
//         System.out.println("I got " + marks + " % in last semester.");
//     }
// }

/*  Scanner class
Step1
import java.util.*;
import java.util.Scanner;   //imports only scanner class
Step2
Scanner sc = new Scanner(Sysyem.in);
Step3
call scanner class methods - */

// import java.util.Scanner;
// class Dec4{
//     public static void main(String args[]){
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter your Age : ");
//         // int age = sc.nextInt();
//         // sc.nextLine();
//         int age = Integer.parseInt(sc.nextLine());
//         System.out.print("Enter your Name : ");
//         String name = sc.nextLine();

//         // System.out.print("Enter your Marks(%) : ");
//         // float marks = sc.nextFloat();

//         System.out.println("Name : " + name + "\n Age : " + age);
//     }
// }

// class Dec4
// {
//     public static void main(String args[])
//     {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter your Percentage : ");
//         int per = sc.nextInt();

//         if(per>=90)
//         {
//             System.out.println("O");
//         }
//         else if(per>=80 && per<90)
//         {
//             System.out.println("A+");
//         }
//         else if(per>=50 && per<80)
//         {
//             System.out.println("B");
//         }
//         else
//         System.out.println("Fail");
//     }
// }

// // {
// //     int n=11;
// //     for(int i=1;i<=10;i++)
// //     {
// //         System.out.println(n + " X " + i +" = " + n * i );

// //     }
// // }

// // {
// //     Scanner sc = new Scanner(System.in);
// //     System.out.println("Enter value of number : ");
// //     int n = sc.nextInt();
// //     int sum=0,digit=0;

// //     do{
// //         digit = n%10;
// //         sum += digit;
// //         n=n/10;        
// //     }
// //     while (n>0);
// //     System.out.println(sum);

// // }

// // {
// //     int arr[] = {1,2,3,4,5,6,7,8};
// //     for(int i : arr)
// //     {
// //         System.out.print(i + " ");
// //     }
// // }


// //decimaltobinary
// // {
// //     Scanner input = new Scanner(System.in);
// //     System.out.print("Enter value of number : ");
// //     int Binary = input.nextInt();
// //     int digit, Decimal=0, i=0;
// //     while(Binary>0)
// //     {
// //         digit = Binary%10;
// //         Decimal += digit * Math.pow(2,i);
// //         Binary /= 10;
// //         i++;
// //     }

// //     System.out.print(Decimal);

    
// // }

// //binarytodecimal

// // {
// //     String Binary = "" ;
// //     Scanner input = new Scanner(System.in);
// //     System.out.print("Enter a Decimal number : ");
// //     int Decimal = input.nextInt();
// //     int digit;
// //     while(Decimal>0)
// //     {
// //         digit = Decimal % 2;
// //         Binary  = digit + Binary;
// //         Decimal /=2;
// //     }
// //     System.out.print(Binary);
// // }

// {
//    Scanner input = new Scanner(System.in);
//    System.out.println("Enter your choice (1-5) : ");
//    int p_type = input.nextInt();
//    switch(p_type){
//     case 1:
//      System.out.println("You selected Margherita Pizza ! ");
//      break;
//     case 2:
//      System.out.println("You selected Pepperoni Pizza ! ");
//      break;
//     case 3:
//      System.out.println("You selected Veggie Pizza ! ");
//      break;
//     case 4:
//      System.out.println("You selected BBQ Chicken Pizza ! ");
//      break;
//    }
   
//    System.out.println("Enter the size of pizza : \n1. Small - $2\n2. Medium - $4\n3. Large - $6\nEnter your choice : ");
//    int p_size = input.nextInt();
//    switch(p_size){
//     case 1:
//      System.out.println("You selected Small Pizza ! ");
//      break;
//     case 2:
//      System.out.println("You selected Medium Pizza ! ");
//      break;
//     case 3:
//      System.out.println("You selected Large Pizza ! ");
//      break;
//    }
// }
// }