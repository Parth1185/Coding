import java.lang.annotation.*;
import java.lang.reflect.*;

@Retention(RetentionPolicy.RUNTIME)  // Available at runtime
@Target(ElementType.TYPE)  // Applicable to classes
@interface Info {
    String author();
    String version();
}

// Applying annotation
@Info(author = "John Doe", version = "1.0")
class MyClass {
}

public class AnnotationTest {
    public static void main(String[] args) {
        Class<MyClass> obj = MyClass.class;
        
        // Check if annotation is present
        if (obj.isAnnotationPresent(Info.class)) {
            Info info = obj.getAnnotation(Info.class);
            System.out.println("Author: " + info.author());
            System.out.println("Version: " + info.version());
        }
    }
}


class Parent {
    void show() {
        System.out.println("Parent class method");
    }
}

class Child extends Parent {
    @Override
    void show() {  // Ensures correct method override
        System.out.println("Child class method");
    }
}

public class OverrideExample {
    public static void main(String[] args) {
        Parent obj = new Child();
        obj.show();
    }
}



class OldClass {
    @Deprecated
    public void oldMethod() {
        System.out.println("This is a deprecated method.");
    }
}

public class SuppressWarningsExample {
    public static void main(String[] args) {
        OldClass obj = new OldClass();
        @SuppressWarnings("deprecation")
        obj.oldMethod();  // No warning displayed
    }
}

import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.METHOD)  // Can be applied only to methods
@interface Task {
    String description();
}

class Work {
    @Task(description = "This is a sample task")
    public void doWork() {
        System.out.println("Task is being executed.");
    }
}

public class TaskExample {
    public static void main(String[] args) {
        Work obj = new Work();
        obj.doWork();
    }
}