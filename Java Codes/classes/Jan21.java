// class Student{

//         private int roll;
//         private String name;

//         public Student(int r, String n){
//             roll = r;
//             name = n;
//         }

//         public Student(Student std){    //copy constructor
//             roll = std.roll;
//             name = std.name;
//         }

//         public void display(){
//             System.out.println(roll + " : " + name);
//         }

//         public void set(int r){
//             roll = r;
//         }

//         public void set(String n){
//             name = n;
//         }

//         public void set(int r, String n){
//             roll=r;
//             name=n;
//         }
//     }

// public class Jan21{
    
//     public static void main(String []args){
//         Student s1 = new Student(101,"Parth");
//         Student s2 = new Student(s1);

//         s1.set(100);
//         s2.set("Kartik");

//         s1.display();
//         s2.display();
//     }
// }

// class Student{

//         private int roll;
//         private String name;
//         private float marks;

//         public Student(int r, String n){
//             roll = r;
//             name = n;
//         }
//         public Student(String n){
//             name = n;
//         }

//         public Student(int roll){
//             // this.roll = roll;   //jiske sath 'this' aata hai, wo hota hai class ka object variable
//             this(roll);
//         }

//         public Student(int r, String n, float m){
//             this(r,n);
//             marks = m;
//         }

//         /*rules:
//         "this" statement should be the first statement in constructor
//         a constructor can only changes only a single constructor
//         should not be calling each other in a cycle
//         */

//         public Student(Student std){    //copy constructor
//             roll = std.roll;
//             name = std.name;
//         }

//         public void display(){
//             System.out.println(roll + " : " + name + " " + marks);
//         }
//     }

// public class Jan21{
    
//     public static void main(String []args){
//         Student s1 = new Student(101,"Parth", 95.5f);
//         Student s2 = new Student(s1);
        
//         s1.display();
//         s2.display();
//     }
// }

// class Employee{

//     private int id;
//     private String name;
//     private double salary;

//     public Employee(Employee emp){
//             id = emp.id;
//             name = emp.name;
//             salary = emp.salary;
//         }

//     // public Employee(int i, String n, double s){
//     //         id = i;
//     //         name = n;
//     //         salary = s;
//     //     }

//         public Employee(int i, String n){
//             id = i;
//             name = n;
//         }
//         public Employee(String n){
//             name = n;
//         }
//         // public Employee(int i){
//         //     id = i;
//         // }
//         public Employee(int id){
//             this.id = id;   
//         }

//         public Employee(int i, String n, double s){
//             this(i,n);
//             salary = s;
//         }        

//         public void display(){
//             System.out.println(id + " : " + name + " " + salary);
//         }

// }

// public class Jan21{
    
//     public static void main(String []args){

//         Employee e1 = new Employee(101,"Parth", 69000);
//         Employee e2 = new Employee(e1);
        
//         e1.display();
//         e2.display();
//     }
// }

/*varargs: variable length arguments
return_type func_name(data_type... name)
eg:- int sum(int... nums)   //takes 0 to infinite arguments*/

// class Add{
// public void sum(int... nums){
//     int sum=0;
//     for(int i : nums){
//         sum += i;
//         }
//         System.out.println("Count of arguments : " + nums.length);
//         System.out.println("Sum is : " + sum);
//     }
// }
// class Jan21{
//     public static void main(String[] args){
//         Add a1= new Add();
//         a1.sum();
//         a1.sum(10,20,30);
//         int a[] = {1,2,3,4,5};
//         a1.sum(a);
//     }
// }

// class Add{
// public void sum(String name, int... nums){
//     System.out.println("Name : " + name);
//     int sum=0;
//     for(int i : nums){
//         sum += i;
//         }
//         System.out.println("Count of arguments : " + nums.length);
//         System.out.println("Sum is : " + sum);
//     }
// }
// class Jan21{
//     public static void main(String[] args){
//         Add a1= new Add();
//         a1.sum("Rohan");
//         a1.sum("Mohan", 10,20,30);
//     }
// }

// class Add{
//     // public void sum(boolean... bools){
//     //     System.out.println("Boolean varargs");
//     // }

//     public void sum(int... ints){
//         System.out.println("Integer varargs");
//     }

//     public void sum(double... dbs){
//         System.out.println("Double varargs");
//     }
// }

// class Jan21{
//     public static void main(String[] args){
//         Add a1= new Add();
//         a1.sum();
//     }
// }

class Add{

    public void sum(double a, double b){
        System.out.println("2 args");
        System.out.println(a+b);
    }

    public void sum(double... dbs){
        System.out.println("Double varargs");
    }
}

class Jan21{
    public static void main(String[] args){
        Add a1= new Add();
        a1.sum(10.5, 20.5);
    }
}
