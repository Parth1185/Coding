//class is a collection of variables and methods
//variables define properties and methods define behaviour of class

//data encapsulation: to put/hide data in wrapper(capsule)

// public class main{
//     public static void main(String[] args) {
//         Student s1 = new Student();
//         Student s2 = new Student();

//         s1.roll = 101;
//         s1.marks = 98.5f;

//         s1.showData();  
//         s2.showData();  
//     }
// }





import java.util.*;
class Student{
   Scanner sc = new Scanner(System.in);
   int roll = sc.nextInt();
   float marks = sc.nextFloat() ;  // these are class variable or instance variable
   String name = sc.next() ;
   public  void ShowData(){
       System.out.println(roll+ " : " + name + ", " + marks);
   }
}
class main{
   public static void main(String[] args) {
       Student S1 = new Student() ;
       S1.ShowData();
   }
}


// Encapsulation - to put something in a capsule(Wrapper)

// class Student{
//    private int roll ;
//    private String name ;
//    int marks ;

//    //setting
//    public void setRoll(int r){
//        if(r < 0){
//            System.out.println("Roll number cannot be less than 0");
//        }
//        else{
//            roll = r ;
//        }
//    }
//    public void setMarks(int m){
//        if(m < 0 || m > 100){
//            System.out.println("Marks should be between 0 and 100");
//        }
//        else{
//            marks = m ;
//        }
//    }
//    public void setName(String n){
//        name = n ;
//    }


//    //getting
//    public int getRoll(){
//        return roll;
//    }
//    public int getMarks(){
//        return marks;
//    }
//    public String getName() {
//        return name;
//    }
// }

// class Demo{
//    public static void main(String[] args) {
//        Student s1 = new Student();
//        s1.setRoll(10);
//        s1.setMarks(85);
//        s1.setName("Rajveer");

//        System.out.println(s1.getRoll());;
//        System.out.println(s1.getMarks());
//        System.out.println(s1.getName());
//    }
// }