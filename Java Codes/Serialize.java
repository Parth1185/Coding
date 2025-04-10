import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;

class Student implements Serializable {

    private int roll;
    private String name;

    public Student(int roll, String name) {
        this.roll = roll;
        this.name = name;
    }

    public int getRoll() {
        return roll;
    }

    public String getName() {
        return name;
    }
}

class Serialize {
    public static void main(String[] args) {

        try {
            Student s1 = new Student(1009, "Parth");
            ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("D:/Coding/demo2.txt"));
            oos.writeObject(s1);
            oos.close();

            ObjectInputStream ois = new ObjectInputStream(new FileInputStream("D:/Coding/demo2.txt"));
            Student studentFileObject = (Student) ois.readObject();
            System.out.println(studentFileObject.getName());
            System.out.println(studentFileObject.getRoll());
        }

        catch (Exception e) {
            System.out.println(e);
        }

    }
}