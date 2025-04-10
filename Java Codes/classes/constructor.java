/* constructor : similar to methods, but have same name as class name
used for initialising class/instance variables
called automatically when object of class is created
called only once for particular object
has no return type
*/

// class Student{

//     public int roll;
//     public String name;
//     public void demo1(){
//         System.out.println("Hello from demo1");
//     }

//     public Student(){
//         System.out.println("Hello from default constructor");
//         roll=0;
//         name=null;
//     }

//     public void Student(){  //it's not a constructor, it is a normal method
//         System.out.println("Hello from function");
//     }

//     public Student(int r, String n){
//         System.out.println("Hello from parametrised contructor");
//         roll = r;
//         name = n;
//     }

//     public void showData(){
//         System.out.println(roll + " : " + name);
//     }

// }
// public class constructor{
//     public static void main(String[] args){
//         Student s1 = new Student();
//         // s1.demo1();
//         // s1.Student(); a constructor cannot be called like this, called only once during object creation
//         // s1.Student();
//         s1.showData();
//         Student s2 = new Student(101,"Kartik");
//         s2.showData();
//     }
// }

// class Student{

//     private int roll;
//     private String name;

//     public Student(){
//         System.out.println("Default");
//         roll=0;
//         name=null;
//     }

//     public Student(int r){
//         System.out.println("1");
//         roll = r;
//     }
    
//     public Student(String n){
//         System.out.println("2");
//         name = n;
//     }

//     public Student(int r, String n){
//         System.out.println("3");
//         roll = r;
//         name = n;
//     }

//     public Student(String n, int r){
//         System.out.println("4");
//         name = n;
//         roll = r;
//     }

//     public void showData(){
//         System.out.println(roll + " : " + name);
//     }

// }
// public class constructor{
//     public static void main(String[] args){
//         Student s1 = new Student();
//         Student s2 = new Student(101);
//         Student s3 = new Student("Kartik");
//         Student s4 = new Student(102,"Rohan");
//         Student s5 = new Student("Gaurav", 103);

//         s1.showData();
//         s2.showData();
//         s3.showData();
//         s4.showData();
//         s5.showData();

//     }
// }

class Employee{
    private int id;
    private String name;
    private int salary;

    public void showData(){
        System.out.println(id + " : " + name + ", " + salary);
    }

    public Employee(){
        id=0;
        name=null;
        salary=0;
    }

    public Employee(int i, String n, int s){
        id=i;
        name=n;
        salary=s;
    }

    public Employee(int i){
        id=i;
    }

    public Employee(String n){
        name=n;
    }

    public Employee(int s){
        salary=s;
    }
    public Employee(int i, String n){
        id=i;
        name=n;
    }
    public Employee(String n, int s){
        name=n;
        salary=s;
    }
    public Employee(int i, int s){
        id=i;
        salary=s;
    }
        public Employee(String n,int i){
        name=n;
        id=i;
    }
    public Employee(int s, String n){
        salary=s;
        name=n;
    }
    public Employee(int s,int i){
        salary=s;
        id=i;
    }
}

public class constructor {
    public static void main(String[] args) {

        Employee emp1 = new Employee();
        emp1.showData();  

        Employee emp2 = new Employee(101, "John Doe", 50000);
        emp2.showData(); 

        Employee emp3 = new Employee(102);
        emp3.showData();  

        Employee emp4 = new Employee("Jane Smith");
        emp4.showData(); 

        Employee emp5 = new Employee(60000);
        emp5.showData(); 

        Employee emp6 = new Employee(103, "Mark Turner");
        emp6.showData(); 

        Employee emp7 = new Employee("Alice Brown", 70000);
        emp7.showData();

        Employee emp8 = new Employee(104, 80000);
        emp8.showData();

        Employee emp9 = new Employee("Charlie Green", 105);
        emp9.showData(); 
        Employee emp10 = new Employee(90000, "Diana Blue");
        emp10.showData();

        Employee emp11 = new Employee(100000, 106);
        emp11.showData();  
    }
}
